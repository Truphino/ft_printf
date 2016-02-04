/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 16:55:43 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/04 13:12:45 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		fill(void (*lst_fct[15])(t_data *, va_list))
{
	lst_fct[0] = &print_s;
	lst_fct[1] = &print_ls;
	lst_fct[2] = &print_p;
	lst_fct[3] = &print_d;
	lst_fct[4] = &print_ld;
	lst_fct[5] = &print_i;
	lst_fct[6] = &print_o;
	lst_fct[7] = &print_lo;
	lst_fct[8] = &print_u;
	lst_fct[9] = &print_lu;
	lst_fct[10] = &print_x;
	lst_fct[11] = &print_lx;
	lst_fct[12] = &print_c;
	lst_fct[13] = &print_lc;
	lst_fct[14] = &print_per;
}

static void		fd_conv(char *s, va_list arg, t_data *data,
		void (*lst_fct[15])(t_data *, va_list))
{
	char		*conv;
	int			i;
	char		*flags;

	i = 1;
	conv = "sSpdDioOuUxXcC%";
	while (ft_strpos(conv, s[i]) == -1 && s[i])
		i++;
	if (!s[i])
		return (ft_putstr_fd("Conversion error\n", 2));
	flags = ft_strnew(i);
	flags = ft_strncpy(flags, s + 1, i);
	get_flag(flags, data);
	lst_fct[ft_strpos(conv, s[i])](data, arg);
}

static void		ft_clear_data(t_data *data)
{
	data->len_for = 0;
	data->flag = 0;
	data->field = 0;
	data->prec = -1;
	data->len_mod = 0;
}

int				ft_printf(char *format, ...)
{
	va_list		arg;
	int			i;
	t_data		*data;
	void		(*lst_fct[15])(t_data *, va_list);

	i = 0;
	fill(lst_fct);
	data = ft_memalloc(sizeof(t_data));
	ft_clear_data(data);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_printchar(format[i++], data);
		else
		{
			fd_conv(format + i, arg, data, lst_fct);
			i += data->len_for;
			ft_clear_data(data);
		}
	}
	free(data);
	va_end(arg);
	return (data->printed);
}

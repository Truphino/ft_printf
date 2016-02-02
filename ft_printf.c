/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 16:55:43 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 15:09:57 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "fct.h"

static void		fd_conv(char *s, va_list arg, t_data *data)
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
	g_lst_print[ft_strpos(conv, s[i])](arg, data);
}

static void		ft_clear_data(t_data *data)
{
	data->len_for = 0;
	data->flag = 0;
	data->field = 0;
	data->prec = 0;
	data->len_mod = 0;
}

int				ft_printf(char *src, ...)
{
	va_list		arg;
	int			i;
	t_data		*data;

	i = 0;
	data = ft_memalloc(sizeof(t_data));
	va_start(arg, src);
	while (src[i])
	{
		if (src[i] != '%')
		{
			ft_printchar(src[i], data);
			i++;
		}
		else
		{
			fd_conv(src + i, arg, data);
			i += data->len_for;
			ft_clear_data(data);
		}
	}
	free(data);
	va_end(arg);
	return (data->printed);
}

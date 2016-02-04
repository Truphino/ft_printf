/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:03:06 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/04 19:34:38 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_x(t_data *data, va_list arg)
{
	char	*nb;
	int		i;
	char	*mod;

	nb = what_uconv(arg, data, 16);
	if (ft_strcmp(nb, "0") == 0 && data->prec == 0)
		ft_str_empty(nb);
	mod = ((data->flag & 1) && ft_strcmp(nb, "0") != 0 && nb[0]) ? "0x" : NULL;
	i = data->field - ft_max(ft_strlen(nb) + ft_strnlen(mod), data->prec);
	if (data->prec != -1 && ((data->flag & 2) != 0))
		data->flag = data->flag - 2;
	if ((data->flag & 4) != 0)
		print_nb_str(nb, data, mod);
	while ((i-- > 0) && (data->flag & 2) == 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		print_nb_str(nb, data, mod);
	free(nb);
}

void		print_lx(t_data *data, va_list arg)
{
	char	*nb;
	int		i;
	char	*mod;

	nb = what_uconv(arg, data, 16);
	mod = ((data->flag & 1) && ft_strcmp(nb, "0") != 0) ? "0X" : NULL;
	ft_strupper(nb);
	if (nb[0] == '-')
		i = data->field - ft_max(ft_strlen(nb) + ft_strnlen(mod),
								data->prec + 1);
	else
		i = data->field - ft_max(ft_strlen(nb), data->prec);
	if (data->prec != -1 && ((data->flag & 2) != 0))
		data->flag = data->flag - 2;
	if ((data->flag & 4) != 0)
		print_nb_str(nb, data, mod);
	while ((i-- > 0) && (data->flag & 2) == 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		print_nb_str(nb, data, mod);
	free(nb);
}

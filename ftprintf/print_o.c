/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:00:15 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/04 18:54:11 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_o(t_data *data, va_list arg)
{
	char	*nb;
	int		i;
	char	*mod;

	nb = what_uconv(arg, data, 8);
	if (ft_strcmp(nb, "0") == 0 && data->prec == 0)
		ft_str_empty(nb);
	mod = ((data->flag & 1) != 0 && ft_strcmp(nb, "0") != 0) ? "0" : NULL;
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

void		print_lo(t_data *data, va_list arg)
{
	print_o(data, arg);
}

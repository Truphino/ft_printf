/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:02:10 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/12 13:19:36 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_d(va_list arg, t_data *data)
{
	char	*nb;
	int		i;
	char	space;

	space = ' ';
	nb = what_conv(arg, data, 10);
	if (nb[0] == '-')
		i = data->field - ft_max(ft_strlen(nb), data->prec + 1);
	else
		i = data->field - ft_max(ft_strlen(nb), data->prec);
	if (data->prec != 0 && ((data->flag & 2) != 0))
		data->flag = data->flag - 2;
	if ((data->flag & 4) != 0)
		print_nb_str(nb, data);
	while ((i-- > 0) && (data->flag & 2) == 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		print_nb_str(nb, data);
}

void		print_ld(va_list arg, t_data *data)
{
	print_d(arg, data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:01:05 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 14:30:56 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_u(va_list arg, t_data *data)
{
	char	*nb;
	int		i;
	char	space;

	space = ' ';
	nb = what_uconv(arg, data, 10);
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
	free(nb);
}

void		print_lu(va_list arg, t_data *data)
{
	print_u(arg, data);
}

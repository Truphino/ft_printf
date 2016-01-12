/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:39:35 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/12 12:34:29 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_nb_str(char *nb, t_data *data)
{
	int		i;

	if (data->prec == 0 && (data->flag & 2) != 0)
		i = data->field - ft_strlen(nb);
	else
	{
		if (nb[0] != '-')
			i = data->prec - ft_strlen(nb);
		else
			i = data->prec - (ft_strlen(nb) - 1);
	}
	if (*nb == '-')
	{
		ft_printchar('-', data);
		nb++;
	}
	while (i-- > 0)
		ft_printchar('0', data);
	while (*nb)
	{
		ft_printchar(*nb, data);
		nb++;
	}
}

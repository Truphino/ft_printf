/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pour.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 12:57:14 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/11 13:15:08 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void		print_per(va_list arg, t_data *data)
{
	int		i;
	char	space;

	(void)arg;
	i = data->field;
	space = ' ';
	if (data->flag & 2)
		space = '0';
	if ((data->flag & 4) != 0)
		ft_printchar('%', data);
	while (--i > 0)
		ft_printchar(space, data);
	if ((data->flag & 4) == 0)
		ft_printchar('%', data);
}

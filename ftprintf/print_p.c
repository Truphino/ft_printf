/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:03:41 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 14:12:48 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_p(va_list arg, t_data *data)
{
	data->flag = (data->flag | 1);
	data->len_mod = 8;
	print_x(arg, data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:03:41 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/04 13:09:06 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		print_p(t_data *data, va_list arg)
{
	data->flag = (data->flag | 1);
	data->len_mod = 8;
	print_x(data, arg);
}

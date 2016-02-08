/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:03:41 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/08 14:15:30 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			print_p(t_data *data, va_list arg)
{
	ft_printchar('0', data);
	ft_printchar('x', data);
	data->len_mod = 8;
	return (print_x(data, arg));
}

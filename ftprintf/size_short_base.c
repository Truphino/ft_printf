/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_short_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:45:02 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/06 21:31:47 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t				size_short_base(short n, int base)
{
	size_t			len;
	unsigned short	tmp;

	len = (n < 0);
	tmp = (n < 0) ? -n : n;
	while (tmp >= (unsigned)base)
	{
		len++;
		tmp = tmp / base;
	}
	return (len);
}

size_t				size_ushort_base(unsigned short n, int base)
{
	size_t			len;

	len = 1;
	while (n >= base)
	{
		len++;
		n = n / base;
	}
	return (len - 1);
}

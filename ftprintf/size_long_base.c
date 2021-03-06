/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_long_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:36:04 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/08 17:10:50 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t				size_long_base(long n, int base)
{
	size_t			len;
	unsigned long	tmp;

	len = (n < 0);
	tmp = (n < 0) ? -n : n;
	while (tmp >= (unsigned)base)
	{
		len++;
		tmp = tmp / base;
	}
	return (len + 1);
}

size_t				size_ulong_base(unsigned long n, int base)
{
	size_t			len;

	len = 0;
	while (n >= (unsigned int)base)
	{
		len++;
		n = n / (unsigned int)base;
	}
	return (len + 1);
}

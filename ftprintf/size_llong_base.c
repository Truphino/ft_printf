/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_llong_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:42:52 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/06 21:13:22 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t				size_llong_base(long long n, int base)
{
	size_t			len;
	unsigned long	tmp;

	len = (n < 0);
	tmp = (n < 0) ? -n : n;
	if (n < 0)
		len++;
	while (tmp >= (unsigned)base)
	{
		len++;
		tmp = tmp / base;
	}
	return (len);
}

size_t				size_ullong_base(unsigned long long n, int base)
{
	size_t			len;

	len = 1;
	while (n >= (unsigned int)base)
	{
		len++;
		n = n / (unsigned int)base;
	}
	return (len - 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_toa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 12:44:33 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/12 12:44:36 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*short_toa_base(short int n, int base)
{
	size_t		len;
	char		*res;
	char		*c;

	c = "0123456789abcdef";
	if (n == -32767)
		return (ft_strdup("-32767"));
	len = size_int_base(n, base);
	if ((res = ft_strnew(len)) == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
	while (len > 0)
	{
		res[len] = c[n % base];
		n = n / base;
		len--;
	}
	if (res[len] != '-')
		res[len] = c[n % base];
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_char_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 14:41:23 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 14:47:34 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	size_char_base(char n, int base)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= base)
	{
		len++;
		n = n / base;
	}
	return (len - 1);
}

size_t	size_uchar_base(unsigned char n, int base)
{
	size_t	len;

	len = 1;
	while (n >= base)
	{
		len++;
		n = n / base;
	}
	return (len - 1);
}

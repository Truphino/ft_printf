/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 15:09:08 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/08 17:18:17 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <locale.h>
#include <stdio.h>
#define PRINT ()

void			print_bin(char c)
{
	unsigned char	mask;

	mask = 0b10000000;
	while (mask > 0)
	{
		if (c & mask)
			ft_putchar('1');
		else
			ft_putchar('0');
		mask = mask >> 1;
	}
}

int				main(void)
{
	int			i;
	int			j;
	char		c;

	setlocale(LC_ALL, "");
	i = printf PRINT;
	ft_putstr("Printf printed :");
	ft_putnbr(i);
	ft_putchar('\n');
	j = ft_printf PRINT;
	ft_putstr("Ft_printf printed :");
	ft_putnbr(j);
	ft_putchar('\n');
}

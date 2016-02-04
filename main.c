/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 15:09:08 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/04 19:33:35 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <locale.h>
#include <stdio.h>
#define PRINT ("%i\n", ft_atoi("67u"))

int				main(void)
{
	int			i;
	int			j;

	setlocale(LC_ALL, "en_US.UTF-8");
	i = printf PRINT;
	ft_putstr("Printf printed :");
	ft_putnbr(i);
	ft_putchar('\n');
	j = ft_printf PRINT;
	ft_putstr("Ft_printf printed :");
	ft_putnbr(j);
	ft_putchar('\n');
}

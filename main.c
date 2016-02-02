/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 15:09:08 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 15:09:49 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <stdio.h>

int				main(void)
{
	int			i;
	int			j;
	char		c[] = "Salut";

	setlocale(LC_ALL, "en_US.UTF-8");
	j = printf("%p\n", c);
	ft_putstr("Printed :");
	ft_putnbr(j);
	ft_putchar('\n');
	i = ft_printf("%p\n", c);
	ft_putstr("Printed :");
	ft_putnbr(i);
	ft_putchar('\n');
}

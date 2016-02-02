/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:05:05 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 14:27:06 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <unistd.h>
#include <limits.h>
#include "ft_printf.h"

int				main(void)
{
	char		o;
	char		*str;

	setlocale(LC_ALL, "en_US.UTF-8");
	o = 'a';
	str = "2692 2694";
	printf("%p && %#lx", str, (unsigned long)str);
}

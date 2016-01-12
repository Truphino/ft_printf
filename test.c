/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:05:05 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/12 12:47:57 by trecomps         ###   ########.fr       */
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
	wchar_t		*str;

	setlocale(LC_ALL, "en_US.UTF-8");
	o = 'a';
	str = L"Alpha : \x3b1 ";
	printf("%ld\n", LONG_MIN);
}

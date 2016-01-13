/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:05:05 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/13 13:28:41 by trecomps         ###   ########.fr       */
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
	str = L"\x2692 \x2694";
	printf("Printed :%i\n", printf("%ls\n", str));
}

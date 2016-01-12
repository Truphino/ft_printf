/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 12:55:54 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/09 15:15:53 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void			print_s(va_list arg, t_data *data)
{
	int			i;
	char		*str;

	if (data->len_mod == 8)
		return  (print_ls(arg, data));
	str = va_arg(arg, char *);
	i = data->field - ft_strlen(str);
	if ((data->flag & 4) != 0)
		ft_printstr(str, data);
	while (i-- > 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		ft_printstr(str, data);

}

void			print_ls(va_list arg, t_data *data)
{
	int			i;
	wchar_t		*str;

	str = va_arg(arg, wchar_t *);
	i = data->field - sizewstr(str);
	if ((data->flag & 4) != 0)
		ft_printwstr(str, data);
	while (i-- > 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		ft_printwstr(str, data);

}

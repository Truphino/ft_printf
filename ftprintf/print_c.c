/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 12:59:51 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/09 13:52:20 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void		print_c(va_list arg, t_data *data)
{
	int		i;

	i = data->field;
	if (data->len_mod == 8)
		return  (print_lc(arg, data));
	if ((data->flag & 4) != 0)
		ft_printchar((char)va_arg(arg, int), data);
	while (--i > 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		ft_printchar((char)va_arg(arg, int), data);
}

void		print_lc(va_list arg, t_data *data)
{
	int		i;
	int		c;

	c = va_arg(arg, int);
	i = data->field - sizewchar(c);
	if ((data->flag & 4) != 0)
		ft_printwchar(c, data);
	while (i-- > 0)
		ft_printchar(' ', data);
	if ((data->flag & 4) == 0)
		ft_printwchar(c, data);
}
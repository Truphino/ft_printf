/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 15:07:09 by trecomps          #+#    #+#             */
/*   Updated: 2016/02/02 15:07:55 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCT_H
# define FCT_H

#include "ft_printf.h"

void			(*g_lst_print[15])(va_list, t_data *) =
{
	print_s,
	print_ls,
	print_p,
	print_d,
	print_ld,
	print_i,
	print_o,
	print_lo,
	print_u,
	print_lu,
	print_x,
	print_lx,
	print_c,
	print_lc,
	print_per,
};

#endif

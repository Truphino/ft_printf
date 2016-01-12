/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:19:47 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/09 12:46:05 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			test_len_mod(char *cmp, char *str)
{
	char	*conv;
	char	*integrer;

	integrer = "diouUxX";
	conv = "sSpdDioOuUxXcC%";
	if ((ft_strncmp(cmp, str, ft_strlen(cmp))) != 0)
	{
		if (ft_strchr(conv, *str))
			return (0);
		else
			return (-1);
	}
	if (!ft_strchr(conv, str[ft_strlen(cmp)]))
		return (-1);
	if (ft_strcmp("l", cmp) == 0 && ft_strchr("sc", str[ft_strlen(cmp)]))
	{
		return (1);
	}
	if (ft_strchr(integrer, str[ft_strlen(cmp)]))
		return (1);
	return (-1);
}

int			get_len_mod(char *str)
{
	char	*ln_mod;
	int		i;
	int		ret;

	i = 0;
	ln_mod = "hh\0ll\0h\0\0l\0\0j\0\0z\0\0";
	while (i < 6)
	{
		ret = test_len_mod(ln_mod + (i * 3), str);
		if (ret == 1 || ret == 0)
			return (ret * ft_pow(2, i));
		i++;
	}
	return (-1);
}

void		get_flag(char *str, t_data *data)
{
	int		i;
	char	*flag;

	flag = "#0-+ ";
	i = -1;
	data->len_for = ft_strlen(str) + 1;
	while (ft_strpos(flag, str[++i]) > -1 && str[i])
		data->flag = data->flag | ft_pow(2, ft_strpos(flag, str[i]));
	if (ft_isdigit(str[i]))
		data->field = ft_atoi(str + i);
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.')
	{
		i++;
		data->prec = ft_atoi(str + i);
	}
	while (ft_isdigit(str[i]))
		i++;
	data->len_mod = get_len_mod(str + i);
	if ((data->flag & 2) > 0 && (data->flag & 4) > 0)
		data->flag = data->flag - 2;
}

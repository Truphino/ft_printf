/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <trecomps@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 11:44:32 by trecomps          #+#    #+#             */
/*   Updated: 2016/01/12 12:02:54 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct			s_data
{
	int					printed;
	int					len_for;
	int					flag;
	int					field;
	int					prec;
	int					len_mod;
}						t_data;

void					print_nb_str(char *nb, t_data *data);
size_t					size_int_base(int n, int base);
size_t					size_int(int n);
char					*ft_itoa_base(int n, int base);
int						ft_max(int a, int b);
int						ft_len_int(int n, int base);
void					ft_print_int(int n, int base, t_data *data);
void					ft_putnbr_base(int n, int base);
void					ft_printwstr(wchar_t *str, t_data *data);
int						sizewstr(wchar_t *str);
void					ft_printstr(char *str, t_data *data);
int						sizewchar(int c);
void					ft_printwchar(wchar_t c, t_data *data);
void					ft_printchar(char c, t_data *data);
int						ft_isdigit(int c);
int						ft_pow(int a, int b);
void					get_flag(char *str, t_data *data);
int						count_byte(wchar_t c);
size_t					ft_wstrlen(wchar_t *str);
void					ft_putwchar(wchar_t c);
void					ft_putwstr(wchar_t *str);
void					print_s(va_list arg, t_data *data);
void					print_ls(va_list arg, t_data *data);
void					print_p(va_list arg, t_data *data);
void					print_d(va_list arg, t_data *data);
void					print_ld(va_list arg, t_data *data);
void					print_i(va_list arg, t_data *data);
void					print_o(va_list arg, t_data *data);
void					print_lo(va_list arg, t_data *data);
void					print_u(va_list arg, t_data *data);
void					print_lu(va_list arg, t_data *data);
void					print_x(va_list arg, t_data *data);
void					print_lx(va_list arg, t_data *data);
void					print_c(va_list arg, t_data *data);
void					print_lc(va_list arg, t_data *data);
void					print_per(va_list arg, t_data *data);
int						ft_strpos(const char *s, int c);
int						ft_printf(char *src, ...);
int						ft_abs(int c);
int						ft_atoi(const char *s);
char					*ft_itoa(int n);
void					*ft_memalloc(size_t size);
void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putnbr(int n);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr(const char *s);
void					ft_putstrn(const char *s);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl(const char *s);
void					ft_putendln(const char *s);
void					ft_putendl_fd(const char *s, int fd);
char					*ft_strnew(size_t size);
char					*ft_strchr(const char *s, int c);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *str);
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlen(const char *str);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strncpy(char *dest, const char *src, size_t n);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *s1, const char *s2);

#endif
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trecomps <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 16:45:26 by trecomps          #+#    #+#              #
#    Updated: 2016/01/12 13:15:27 by trecomps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=				gcc
CFLAGS=			-Wall -Wextra -Werror
NAME=			libftprintf.a
SRC=			ft_abs.c\
				ft_atoi.c\
				ft_itoa.c\
				ft_memalloc.c\
				ft_putchar.c\
				ft_putchar_fd.c\
				ft_putendl.c\
				ft_putendln.c\
				ft_putendl_fd.c\
				ft_putnbr.c\
				ft_putnbr_fd.c\
				ft_putstr.c\
				ft_putstrn.c\
				ft_putstr_fd.c\
				ft_strnew.c\
				ft_strchr.c\
				ft_strcmp.c\
				ft_strcpy.c\
				ft_strdup.c\
				ft_strjoin.c\
				ft_strlen.c\
				ft_strncmp.c\
				ft_strncpy.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strstr.c\
				ft_strpos.c\
				ft_putwchar.c\
				ft_putwstr.c\
				ft_wstrlen.c\
				count_byte.c\
				get_flag.c\
				print_c.c\
				print_d.c\
				print_i.c\
				print_o.c\
				print_p.c\
				print_per.c\
				print_s.c\
				print_u.c\
				print_x.c\
				ft_pow.c\
				ft_isdigit.c\
				ft_printchar.c\
				ft_printwchar.c\
				sizewchar.c\
				ft_printstr.c\
				sizewstr.c\
				ft_printwstr.c\
				ft_print_int.c\
				ft_print_int.c\
				max.c\
				int_toa_base.c\
				size_int.c\
				size_int_base.c\
				ft_print_int.c\
				print_nb_str.c\
				char_toa_base.c\
				int_toa_base.c\
				llong_toa_base.c\
				short_toa_base.c\
				uchar_toa_base.c\
				uint_toa_base.c\
				ullong_toa_base.c\
				ulong_toa_base.c\
				ushort_toa_base.c\
				what_conv.c
OBJ= 			$(SRC:.c=.o)
IDIR=			./include

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(CFLAGS) -I $(IDIR)
	ar r $(NAME) $(OBJ)
	ranlib $(NAME)

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

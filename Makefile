# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanzhao <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 23:05:03 by yanzhao           #+#    #+#              #
#    Updated: 2025/06/13 01:53:26 by yanzhao          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS=ft_adjust_flag.c ft_check_flag.c ft_convert_long_str.c ft_convert_signed_int_str.c ft_convert_unsigned_int_str.c ft_print_adress.c ft_print_c.c ft_printf.c ft_print_signed_int.c ft_print_str_s.c ft_print_unsigned_int.c ft_print_utils2.c ft_print_utils.c

OBJS=$(SRCS:.c=.o)

DEP=$(SRCS:.c=.d)

CC=cc -Wall -Wextra -Werror -MMD

all:$(NAME)

bonus:all

$(NAME):$(OBJS)
	ar rcs $(NAME) $^

%.o:%.c
	$(CC) -c $< -o $@

-include $(DEP)

clean:
	rm -f $(OBJS) $(DEP)

fclean:clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re


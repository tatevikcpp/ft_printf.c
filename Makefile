# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 19:09:57 by smoin-sh          #+#    #+#              #
#    Updated: 2022/05/09 17:56:40 by smoin-sh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Wextra -Werror

NAME := libftprintf.a

SRCS	= ft_printf_c.c ft_printf_d.c\
		  ft_printf_p.c ft_printf_s.c\
		  ft_printf_u.c ft_printf_xl.c\
		  ft_printf_xs.c ft_printf.c\
		  ft_putnbr_counter.c\
		  ft_strlen.c

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar ru $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

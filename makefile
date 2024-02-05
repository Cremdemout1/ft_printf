# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohan <yohan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 10:22:23 by yohan             #+#    #+#              #
#    Updated: 2023/11/22 21:14:46 by yohan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRC = ft_customPrintf, ft_putnbr, ft_lowerHex, ft_UpperHex, /
		ft_putDecValue, ft_printWholeAddress, ft_putchar, ft_putstr

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
			$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
			$(RM)	$(NAME)
re:	fclean	$(NAME)
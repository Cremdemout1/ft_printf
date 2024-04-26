# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycantin <ycantin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 10:22:23 by yohan             #+#    #+#              #
#    Updated: 2024/04/26 16:58:48 by ycantin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRC = str ft_printf numbers
SOURCE = $(SRC:=.o)
all:$(NAME)

$(NAME): $(SOURCE)
			ar rc $(NAME) $(SOURCE)
clean:
			$(RM)	$(SOURCE)
fclean: clean
			$(RM)	$(NAME)
re:	fclean	$(NAME)
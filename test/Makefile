# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/16 18:59:04 by mpascual          #+#    #+#              #
#    Updated: 2020/09/16 19:30:29 by mpascual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Test_ex

CFLAGS = -Wall -Wextra #-Werror

SRC = main.c

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	cd ../ && make re
	cp ../libftprintf.a ./
	gcc -o $(NAME) $(OBJS) -L. libftprintf.a

all: $(NAME)

clean:
	rm -rf $(OBJS)
	cd ../ && make fclean

fclean: clean
	rm -rf $(NAME) libftprintf.a

re: fclean all

.PHONY: fclean
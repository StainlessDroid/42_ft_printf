# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/14 17:01:42 by mpascual          #+#    #+#              #
#    Updated: 2020/09/16 17:52:20 by mpascual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra #-Werror

SRC = src/ft_printf.c src/utils.c src/flags.c src/print_c.c src/print_di.c \
	src/print_p.c src/print_s.c src/print_u.c src/print_x.c

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	cd libft && make
	cp libft/libft.a $(NAME)
	ar -crs $(NAME) $(OBJS)

norme: fclean
	@norminette ./libft/
	@norminette ./src/
	@norminette ./header.h

all: $(NAME)

clean:
	rm -rf $(OBJS)
	cd libft && make fclean

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean

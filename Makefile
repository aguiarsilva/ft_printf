# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 14:20:13 by baguiar-          #+#    #+#              #
#    Updated: 2023/12/09 14:35:51 by baguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

CC := cc

CCFLAGS := -Wextra -Werror -Wall -I.

SRCS = 

SDIR = libft

SOBJ = libft/libft.a

OBJ := $(SRCS:%.c=%.o)

ARCS = ar rcs

RM = rm -f

all: $(NAME)

%.o : %.c
		$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean re fclean all



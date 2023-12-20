# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 14:20:13 by baguiar-          #+#    #+#              #
#    Updated: 2023/12/20 09:37:05 by baguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

CC := cc

CCFLAGS := -Wextra -Werror -Wall -I.

SRCS = 

OBJ := ${SRCS:.c=.o}

ARCS = ar -rc

RM = rm -rf

all: $(NAME)

$(OBJ)
		$(CC) -c $(CCFLAGS) $(SRCS)

$(NAME): $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean re fclean all



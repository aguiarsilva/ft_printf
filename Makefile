# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 14:20:13 by baguiar-          #+#    #+#              #
#    Updated: 2023/12/20 12:12:15 by baguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

CC := cc

CCFLAGS := -Wextra -Werror -Wall

SRCS := ft_printf.c \
		ft_printf_cases.c \
		ft_printf_ptr.c \
		ft_printf_x.c
		
SUBDIR = libft

SUBOBJ = libft/libft.a

OBJ := ${SRCS:.c=.o}

ARCS := ar -rc

RM := rm -rf

all: ${SUBDIR} $(NAME)

$(NAME): $(OBJ)
	cp ${SUBOBJ} ./${NAME}
	${ARCS} ${NAME} ${OBJ}

$(OBJ):
		$(CC) -c $(CCFLAGS) ${SRCS}

${SUBDIR}:
	cd ${SUBDIR} && ${MAKE}

clean:
	$(RM) $(OBJ)
	cd ${SUBDIR} && ${MAKE} clean

fclean: clean
	${RM} ${NAME}
	cd ${SUBDIR} && ${MAKE} fclean

re: fclean all

.PHONY: clean re fclean all ${SUBDIR}



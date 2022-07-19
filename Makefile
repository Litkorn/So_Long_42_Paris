# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 03:41:14 by cleibeng          #+#    #+#              #
#    Updated: 2022/07/19 04:59:26 by cleibeng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = so_long.c\

OBJS = ${SRCS:.c=.o}

DEP = ${SRCS:.c=.d}

CC = cc

CFLAGS = -g -Wall -Wextra -Werror -MMD

RM = rm -rf

LIBFT = libft/libft.a

MLX = mlx/libmlx_Linux.a

all: ${NAME}

%.o:%.c
	${CC} ${CFLAGS} -I libft -I/usr/include -Imlx_linux -O0 -c $< -o $@

${NAME}: ${OBJS} ${LIBFT} ${MLX}
	${CC} -g ${OBJS} -o ${NAME} -Llibft -lft -Lmlx -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz

${LIBFT}:
	make -C libft

${MLX}:
	make -C mlx

clean:
	${RM} ${OBJS} ${DEP}
	make clean -C libft

fclean: clean
		${RM} ${NAME}
		make fclean -C libft
		make clean -C mlx

re:	fclean all

-include ${DEP}

.PHONY: all clean fclean re
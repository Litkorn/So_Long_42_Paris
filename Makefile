# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 03:41:14 by cleibeng          #+#    #+#              #
#    Updated: 2022/09/01 13:38:13 by cleibeng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

INCLUDE = -I /usr/include\
	  -I mlx_linux\
	  -I libft

MINILBX = -Lmlx -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz

SRCS = utils/so_long.c\
	   utils/check_error.c\
	   utils/get_map.c\
	   utils/parsing.c\
	   utils/parse_map.c\
	   utils/clean_all.c\
	   utils/check_content.c\
	   utils/check_path.c\
	   utils/check_path_utils.c\
	   utils/init_struc.c\
	   utils/print_map.c\
	   utils/key_press.c

OBJS = ${SRCS:.c=.o}

DEP = ${SRCS:.c=.d}

CC = cc

CFLAGS = -g3 -Wall -Wextra -Werror -MMD

RM = rm -rf

LIBFT = libft/libft.a

MLX = mlx/libmlx_Linux.a

all: ${NAME}

%.o:%.c
	${CC} ${CFLAGS} $(INCLUDE) -O0 -c $< -o $@

${NAME}: ${OBJS} ${LIBFT} ${MLX}
	${CC} -g ${OBJS} -o ${NAME} -Llibft -lft ${MINILBX}

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

re:	fclean
	make all

norminette:
	@norminette utils
	@norminette libft

-include ${DEP}

.PHONY: all clean fclean re norminette

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 15:36:12 by cleibeng          #+#    #+#              #
#    Updated: 2022/07/19 04:43:47 by cleibeng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi_itoa.c\
	   ft_calloc_bzero.c\
	   ft_clean.c\
	   ft_is.c\
	   ft_memmove.c\
	   ft_mems.c\
	   ft_put_fd.c\
	   ft_split.c\
	   ft_str_ft.c\
	   ft_strchr_cmp.c\
	   ft_strdup_join.c\
	   ft_strl_cat_cpy.c\
	   ft_strlen.c\
	   ft_strtrim.c\
	   ft_tolow_upper.c\
	   get_next_line.c\
	   ft_printf.c\
	   ft_printf_putstrchar.c\
	   ft_printf_putnbr.c\

OBJS = ${SRCS:.c=.o}

CC = gcc

AR = ar rcs

RM = rm -f

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:			fclean ${NAME}

.PHONY: all clean fclean re

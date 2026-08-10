# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csampaio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/30 09:32:25 by csampaio          #+#    #+#              #
#    Updated: 2026/07/30 09:32:40 by csampaio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBIC = ar rcs
NAME = libft.a
OBJS = ${SRCS:.c=.o}
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strchr.c \
	ft_atoi.c
.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME} : ${OBJS}
	${LIBIC} ${NAME} ${OBJS} 
all : ${NAME}
clean : 
	${RM} ${OBJS}
fclean : clean
	${RM} ${NAME}
re : fclean all

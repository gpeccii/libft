# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 15:33:42 by gpecci            #+#    #+#              #
#    Updated: 2023/01/19 16:47:02 by gpecci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm

CFLAGS = -Wall -Wextra -Werror

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME} ${OBJS}
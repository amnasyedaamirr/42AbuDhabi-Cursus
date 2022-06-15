# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 23:08:05 by aaamir            #+#    #+#              #
#    Updated: 2022/06/15 23:24:35 by aaamir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
SRCS		= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
      				ft_isalpha.c ft_isascii.c ft_isdigit.c \
      				ft_isprint.c ft_itoa.c ft_memchr.c ft_split.c \
      				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
					ft_putchar_fd.c ft_putendl_fd.c ft_strjoin.c \
      				ft_putnbr_fd.c ft_putstr_fd.c ft_striteri.c\
      				ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
      				ft_strlen.c ft_strmapi.c ft_strncmp.c \
      				ft_strnstr.c ft_strrchr.c ft_strtrim.c \
      				ft_substr.c ft_tolower.c ft_toupper.c
OBJS		=		${SRCS:.c=.o}
CC			= 	cc
RM			= 	rm -rf
CFLAGS		= 	-Wall -Wextra -Werror
.c.o : 			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:		${OBJS}
		ar -rcs ${NAME} ${OBJS}
all:		${NAME}
clean:		
	${RM} ${OBJS}
re :        clean all
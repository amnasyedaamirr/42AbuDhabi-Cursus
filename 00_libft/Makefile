# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 23:08:05 by aaamir            #+#    #+#              #
#    Updated: 2022/06/26 13:58:43 by aaamir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a

SRCS		= 	$(wildcard ft_*.c)

OBJS		=	${SRCS:.c=.o}

CC			= 	cc

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:		
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
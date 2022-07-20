# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaamir <aaamir@42abudhabi.ae>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 15:52:06 by aaamir            #+#    #+#              #
#    Updated: 2022/07/06 21:09:09 by aaamir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	utils/ft_putvar_addr.c utils/ft_print_char.c \
					utils/ft_print_str.c utils/ft_strlen.c \
					utils/ft_putnbr_base.c utils/ft_print_nbr.c \
					ft_printf.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 16:10:33 by pierremoret       #+#    #+#              #
#    Updated: 2022/02/22 16:08:47 by pierremoret      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += ft_strlen.c
SRCS +=	ft_putstr.c
SRCS +=	ft_format_c.c
SRCS +=	ft_format_d.c
SRCS +=	ft_format_i.c
SRCS +=	ft_format_p.c
SRCS +=	ft_format_s.c
SRCS +=	ft_format_x.c
SRCS +=	ft_format_x_maj.c
SRCS +=	ft_format_u.c
SRCS +=	ft_itoa.c
SRCS +=	ft_itoa_base.c
SRCS +=	ft_itoa_base_maj.c
SRCS +=	ft_itoa_base_long.c
SRCS +=	ft_itoa_unsigned.c
SRCS +=	ft_printf.c
			
			
OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a
LIBC	= ar rc
CC		= gcc
RM		= rm -f
#CFLAGS	= -Wall -Wextra -Werror 

all: ${NAME}

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

out:
	gcc -g $(CFLAGS) $(SRCS) $(SRCS_libft)
	@./a.out

.PHONY: all clean fclean re
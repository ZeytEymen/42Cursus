# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 13:12:00 by ekarabud          #+#    #+#              #
#    Updated: 2023/10/18 13:33:15 by ekarabud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_isalnum.c  ft_isalpha.c \
              ft_isascii.c	ft_isdigit.c \
			  ft_isprint.c	ft_strlen.c  main.c

OBJS= $(SRCS:.c=.o)

CC=gcc

RM= rm -rf

CFLAGS= -Wall -Werror -Wextra

all: $(NAME)


$(NAME): $(OBJS)
	gcc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
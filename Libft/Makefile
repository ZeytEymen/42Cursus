# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 13:12:00 by ekarabud          #+#    #+#              #
#    Updated: 2023/10/23 15:59:40 by ekarabud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_isalnum.c  ft_isalpha.c \
              ft_isascii.c	ft_isdigit.c \
			  ft_isprint.c	ft_atoi.c \
			  ft_memcmp.c  ft_strncmp.c \
			  ft_tolower.c ft_toupper.c \
			  ft_strchr.c  ft_strrchr.c \
			  ft_bzero.c  ft_memchr.c \
			  ft_memcpy.c  ft_memset.c \
			  ft_strlen.c ft_strnstr.c

OBJS= $(SRCS:.c=.o)

CC=gcc

RM= rm -rf

CFLAGS= -Wall -Werror -Wextra

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
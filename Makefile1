# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 17:26:45 by ddaniel-          #+#    #+#              #
#    Updated: 2023/10/07 20:53:10 by ddaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_strchr.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_tolower.c \
       ft_toupper.c \
#BONUS_SCRS = \

OBJS =$(SRCS:.c=.o)
#BOBJS =$(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

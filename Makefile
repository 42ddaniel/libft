# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanda-s <joanda-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:55:22 by joanda-s          #+#    #+#              #
#    Updated: 2023/10/14 21:24:01 by ddaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_substr.c \
		ft_strjoin.c ft_split.c ft_striteri

SRC_B = #	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
#				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
#				ft_lstclear.c ft_lstiter.c ft_lstmap.c

.PHONY: all compile

all: $(NAME)

$(NAME): 
	cc -c $(FLAGS) $(SRC)
	ar rs $(NAME) *.o

bonus: 
	cc -c $(FLAGS) $(SRC_B)
	ar rs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diogo <ddaniel-@student.42lisboa.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 20:11:31 by diogo             #+#    #+#              #
#    Updated: 2023/10/07 01:39:05 by diogo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = /*nomes dos ficheiros das funções*/
BONUS_SRCS = /*nomes dos ficheiros bonus*/

OBJS =$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_)

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsalahal <hsalahal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 14:04:05 by hsalahal          #+#    #+#              #
#    Updated: 2026/10/14 17:38:31 by hsalahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= gcc
CFLAGS= -Wall -Wextra -Werror
AR= ar
ARFLAGS= rcs
SRCS= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c
OBJS= $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME)
re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 07:41:44 by zmabunda          #+#    #+#              #
#    Updated: 2018/06/11 15:57:14 by zmabunda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_bzero.c ft_isascii.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c \
	ft_memalloc.c ft_strnew.c ft_strnequ.c ft_strcat.c ft_strcpy.c ft_itoa.c \
	ft_strncat.c ft_strnstr.c ft_putendl.c ft_putendl_fd.c ft_striteri.c \
	ft_isalnum.c ft_isdigit.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_putstr.c \
	ft_striter.c ft_strchr.c ft_strdup.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
	ft_strdel.c ft_strclr.c ft_isalpha.c ft_isprint.c ft_memchr.c ft_memdel.c \
	ft_putchar.c ft_putstr_fd.c ft_strmap.c ft_strcmp.c ft_strlen.c ft_strncpy.c \
	ft_strstr.c ft_toupper.c ft_strmapi.c ft_strequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c  ft_putnbr.c ft_putnbr_fd.c ft_atoi.c ft_strlcat.c ft_strsplit.c

FLAG = -Wall -Werror -Wextra

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

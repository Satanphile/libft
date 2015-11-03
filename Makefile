# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/19 17:21:46 by thstrent          #+#    #+#              #
#    Updated: 2015/10/27 10:26:51 by thstrent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCFLAG = gcc -Wall -Werror -Wextra

INCLUDES = includes/libft.h

SRC = 	sources/ft_memset.c \
		sources/ft_bzero.c \
		sources/ft_memcpy.c \
		sources/ft_memmove.c \
		sources/ft_memchr.c \
		sources/ft_memcmp.c \
		sources/ft_strlen.c \
		sources/ft_strdup.c \
		sources/ft_strcpy.c \
		sources/ft_strncpy.c \
		sources/ft_strcat.c \
		sources/ft_strncat.c \
		sources/ft_strlcat.c \
		sources/ft_strchr.c \
		sources/ft_strrchr.c \
		sources/ft_strstr.c \
		sources/ft_strnstr.c \
		sources/ft_strcmp.c \
		sources/ft_atoi.c \
		sources/ft_isalpha.c \
		sources/ft_isdigit.c \
		sources/ft_isalnum.c \
		sources/ft_isprint.c \
		sources/ft_toupper.c \
		sources/ft_tolower.c \
		sources/ft_memalloc.c \
		sources/ft_memdel.c \
		sources/ft_strnew.c \
		sources/ft_strdel.c \
		sources/ft_strclr.c \
		sources/ft_striter.c \
		sources/ft_striteri.c \
		sources/ft_strmap.c \
		sources/ft_strmapi.c \
		sources/ft_strequ.c \
		sources/ft_strnequ.c \
		sources/ft_strsub.c \
		sources/ft_strjoin.c \
		sources/ft_strtrim.c \
		sources/ft_strsplit.c \
		sources/ft_itoa.c \
		sources/ft_putchar.c \
		sources/ft_putstr.c \
		sources/ft_putendl.c \
		sources/ft_putnbr.c \
		sources/ft_putchar_fd.c \
		sources/ft_putstr_fd.c \
		sources/ft_putendl_fd.c \
		sources/ft_putnbr_fd.c \
		sources/ft_strrev.c \
		sources/ft_stradd.c \
		sources/ft_strlento.c \
		sources/ft_isascii.c \
		sources/ft_strncmp.c \
		sources/ft_lenf.c

OBJ =	ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strlen.o \
		ft_strdup.o \
		ft_strcpy.o \
		ft_strncpy.o \
		ft_strcat.o \
		ft_strncat.o \
		ft_strlcat.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strstr.o \
		ft_strnstr.o \
		ft_strcmp.o \
		ft_atoi.o \
		ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isprint.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_memalloc.o \
		ft_memdel.o \
		ft_strnew.o \
		ft_strdel.o \
		ft_strclr.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strequ.o \
		ft_strnequ.o \
		ft_strsub.o \
		ft_strjoin.o \
		ft_strtrim.o \
		ft_strsplit.o \
		ft_itoa.o \
		ft_putchar.o \
		ft_putstr.o \
		ft_putendl.o \
		ft_putnbr.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o \
		ft_strrev.o \
		ft_stradd.o \
		ft_strlento.o \
		ft_isascii.o \
		ft_strncmp.o \
		ft_lenf.o

all: $(NAME)

$(NAME):
	$(GCFLAG) -c $(SRC) -I./includes
	ar rc $(NAME) $(OBJ)

test: re
	gcc Maintest-master/libft/main.c -I./includes/ -L. -lft

clean:
	rm -r $(OBJ)

fclean:
	rm $(NAME) $(OBJ)

re: fclean all

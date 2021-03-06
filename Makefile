# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/19 17:21:46 by thstrent          #+#    #+#              #
#    Updated: 2015/11/13 14:58:10 by thstrent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCFLAG = gcc -Wall -Werror -Wextra

INCLUDES = includes/libft.h

SRC =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strrev.c \
		ft_stradd.c \
		ft_strlento.c \
		ft_isascii.c \
		ft_strncmp.c \
		ft_lenf.c \
		ft_memccpy.c

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
		ft_lenf.o \
		ft_memccpy.o

all: $(NAME)

$(NAME):
	$(GCFLAG) -c $(SRC) -I./includes
	ar rc $(NAME) $(OBJ)

test: re
	gcc main_itoa.c -I./includes/ -L. -lft

clean:
	rm -r $(OBJ)

fclean:
	rm $(NAME) $(OBJ)

re: fclean all

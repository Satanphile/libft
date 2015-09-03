# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/19 17:21:46 by thstrent          #+#    #+#              #
#    Updated: 2015/09/03 16:38:29 by thstrent         ###   ########.fr        #
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
		sources/ft_strlento.c

OBJ =	sources/ft_memset.o \
		sources/ft_bzero.o \
		sources/ft_memcpy.o \
		sources/ft_memmove.o \
		sources/ft_memchr.o \
		sources/ft_memcmp.o \
		sources/ft_strlen.o \
		sources/ft_strdup.o \
		sources/ft_strcpy.o \
		sources/ft_strncpy.o \
		sources/ft_strcat.o \
		sources/ft_strncat.o \
		sources/ft_strlcat.o \
		sources/ft_strchr.o \
		sources/ft_strrchr.o \
		sources/ft_strstr.o \
		sources/ft_strnstr.o \
		sources/ft_strcmp.o \
		sources/ft_atoi.o \
		sources/ft_isalpha.o \
		sources/ft_isdigit.o \
		sources/ft_isalnum.o \
		sources/ft_isprint.o \
		sources/ft_toupper.o \
		sources/ft_tolower.o \
		sources/ft_memalloc.o \
		sources/ft_memdel.o \
		sources/ft_strnew.o \
		sources/ft_strdel.o \
		sources/ft_strclr.o \
		sources/ft_striter.o \
		sources/ft_striteri.o \
		sources/ft_strmap.o \
		sources/ft_strmapi.o \
		sources/ft_strequ.o \
		sources/ft_strnequ.o \
		sources/ft_strsub.o \
		sources/ft_strjoin.o \
		sources/ft_strtrim.o \
		sources/ft_strsplit.o \
		sources/ft_itoa.o \
		sources/ft_putchar.o \
		sources/ft_putstr.o \
		sources/ft_putendl.o \
		sources/ft_putnbr.o \
		sources/ft_putchar_fd.o \
		sources/ft_putstr_fd.o \
		sources/ft_putendl_fd.o \
		sources/ft_putnbr_fd.o \
		sources/ft_strrev.o \
		sources/ft_stradd.o \
		sources/ft_strlento.o

all: $(NAME)

$(NAME):
	$(GCFLAG) -c $(SRC) -I./includes
	ar rc $(NAME) $(OBJ)

clean:
	rm -r $(OBJ)

fclean:
	rm $(NAME) $(OBJ)

re: fclean all

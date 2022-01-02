# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makfile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 10:50:08 by aboumadi          #+#    #+#              #
#    Updated: 2021/11/21 19:59:11 by aboumadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_LIST = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		   ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
		   ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memcmp.c\
		   ft_memset.c ft_bzero.c ft_memcpy.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_strdup.c\
		   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c\
		   ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_memmove.c ft_split.c\



OBJ = $(SRC_LIST:.c=.o)

INCLUDE = libft.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $(OBJ)
	@ranlib $@
	#@gcc $(CFLAGS) main.c -L. -lft && ./a.out

%.o: %.c $(INCLUDE)
	gcc $(CFLAGS) -c $< -o $@
	
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all


# **************************************************************************** #
#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fras <fras@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/08 20:56:28 by fras          #+#    #+#                  #
#    Updated: 2022/10/10 19:50:02 by fras          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SOURCES = ft_bzero.c ft_memset.c ft_memcpy.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c 
OBJECTS = $(SOURCES:%.c=%.o)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm $(NAME)

re: fclean all


# +-------------------+
#       TEST PROG     |
# +-------------------+

testprog: testprog.c $(NAME)
	$(CC) $(CFLAGS) $< -L. $(NAME) -o $@

test: testprog
	./$< $(CANDIDATE)

tclean:
	rm -f testprog

ftclean: tclean fclean

testre: ftclean test

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
SOURCES = ft_memcpy.c ft_memset.c ft_bzero.c
OBJECTS = $(SOURCES:%.c=%.o)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

all: $(NAME) test

clean:
	rm -f *.o

fclean: clean
	rm $(NAME)
re:


# +-------------------+
#       TEST PROG     |
# +-------------------+

testprog: testprog.c $(NAME)
	$(CC) $(CFLAGS) $< -L. $(NAME) -o $@

test: testprog
	./$<

tclean:
	rm -f testprog

ftclean: tclean fclean

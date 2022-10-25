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
SOURCES = $(shell find . -type f -name "ft_*.c")
# OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:%.c=%.o))
OBJECTS = $(SOURCES:%.c=%.o)
BUILDDIR = obj
SRCDIR = .

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

# directories:
# 	@mkdir -p $(BUILDDIR)

# $(OBJECTS): $(SOURCES)
# 	$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)

clean:
	rm -f *.o
	rm -rf obj

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

speedtest: testprog
	./$< SPEEDMODE

leakscheck: testprog
	leaks --atExit -- ./$< SPEEDMODE

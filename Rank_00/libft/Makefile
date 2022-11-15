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
SOURCES = $(shell find . -type f -name "ft_*.c" ! -name "ft_lst*.c")
BONUS_SOURCES = $(shell find . -type f -name "ft_lst*.c")
OBJECTS = $(SOURCES:%.c=%.o)
BONUS_OBJECTS = $(BONUS_SOURCES:%.c=%.o)

.PHONY: all clean fclean re bonus

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

all: $(NAME) bonus

clean:
	rm -f *.o
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJECTS) $(NAME)
	ar -rcs $(NAME) $(BONUS_OBJECTS)

# +-------------------+
#       TEST PROG     |
# +-------------------+

testprog: testprog.c all
	$(CC) $(CFLAGS) $< -L. $(NAME) -o $@

test: testprog
	./$< $(CANDIDATE)

tclean:
	rm -f testprog
	rm -f debug
	rm -rf *.dSYM

ftclean: tclean fclean

testre: ftclean test

speedtest: testprog
	./$< SPEEDMODE

leakscheck: testprog
	leaks --atExit -- ./$< SPEEDMODE

debug: testprog.c $(NAME)
	$(CC) $(CFLAGS) -g -fsanitize=address $< -L. $(NAME) -o $@
	./$@ SPEEDMODE

leaksinfo: testprog
	export MallocStackLogging=1 && \
	./$< SPEEDMODE && \
	leaks -atExit -quiet -list -- ./$< SPEEDMODE

alldebugchecks: debug leakscheck

#/////////////////////////////////////////////////////////////////////////////

# BONUS_SOURCES = //---
# # OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:%.c=%.o))
# OBJECTS = //---
# BONUS_OBJECTS = //---
# # BUILDDIR = obj
# # SRCDIR = .
# .PHONY: //---
# $(NAME): //---
# # directories:
# # 	@mkdir -p $(BUILDDIR)
# # $(OBJECTS): $(SOURCES)
# # 	$(CC) $(CFLAGS) -c $< -o $@ 
# all: //----
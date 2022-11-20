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

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJECTS) $(NAME)
	ar -rcs $(NAME) $(BONUS_OBJECTS)

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

# - To make sure it doesn't relink (example):
# ifdef WITH_BONUS
# REG_OBJS = $(OBJS) $(OBJS_BONUS)
# else
# REG_OBJS = $(OBJS)
# endif
#--&&-
# bonus: 			
#	@make WITH_BONUS=1 all

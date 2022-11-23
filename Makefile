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
CFLAGS = -Werror -Wextra -Wall $(INCLUDE)
INCLUDE = -I include
SRC_DIR = srcs
OBJ_DIR = obj
SOURCES = $(shell find $(SRC_DIR) -type f -name "ft_*.c" ! -name "ft_lst*.c")
BONUS_SOURCES = $(shell find $(SRC_DIR) -type f -name "ft_lst*.c")
OBJECTS = $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:%.c=%.o))
BONUS_OBJECTS = $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(BONUS_SOURCES:%.c=%.o))

# No relinking when using bonus target
ifdef WITH_BONUS
	OBJECTS_SELECTED = $(BONUS_OBJECTS)
else
	OBJECTS_SELECTED = $(OBJECTS)
endif
# ^

.PHONY: all clean fclean re bonus directories

$(NAME): directories $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS_SELECTED)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ -c $^

all: $(NAME) bonus

directories:
	@find $(SRC_DIR) -type d | sed 's/$(SRC_DIR)/$(OBJ_DIR)/' | xargs mkdir -p

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: directories $(BONUS_OBJECTS)
	$(MAKE) $(NAME) WITH_BONUS=1
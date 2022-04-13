##
## EPITECH PROJECT, 2022
## my_rpg
## File description:
## Makefile
##

SRC = $(wildcard sources/*.c) \
	  $(wildcard sources/display/*.c) \
	  $(wildcard sources/structs/*.c) \
	  $(wildcard sources/load/*.c) \
	  $(wildcard sources/utils/*.c) \
	  $(wildcard sources/my_event/*.c) \
	  $(wildcard sources/my_event/functions/coins/*.c) \
	  $(wildcard sources/parsing_data/*.c) \
	  $(wildcard sources/quests/*.c) \
	  $(wildcard sources/intro/*.c) \
	  $(wildcard sources/game/*.c) \
	  $(wildcard sources/menu/*.c) \
	  $(wildcard sources/buttons/*.c) \
	  $(wildcard sources/buttons/functions/*.c) \
	  $(wildcard sources/settings/*.c) \
	  $(wildcard sources/images/*.c) \
	  $(wildcard sources/map/*.c) \
	  $(wildcard lib/my/*.c) \

OBJ = $(SRC:%.c=%.o)

SFML_L = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio
CFLAGS = -Iinclude/ -Wno-deprecated

NAME = my_rpg

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(SFML_L) -o $(NAME) $(OBJ)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

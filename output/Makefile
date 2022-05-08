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
	  $(wildcard sources/skill_tree/*.c) \
	  $(wildcard sources/hud/*.c) \
	  $(wildcard sources/utils/*.c) \
	  $(wildcard sources/inventory/*.c) \
	  $(wildcard sources/my_event/*.c) \
	  $(wildcard sources/my_event/functions/views/*.c) \
	  $(wildcard sources/my_event/functions/enemies/*.c) \
	  $(wildcard sources/my_event/functions/game/*.c) \
	  $(wildcard sources/my_event/functions/player/*.c) \
	  $(wildcard sources/my_event/functions/coins/*.c) \
	  $(wildcard sources/my_event/functions/menu/*.c) \
	  $(wildcard sources/my_event/functions/inventory/*.c) \
	  $(wildcard sources/my_event/functions/dialogue/*.c) \
	  $(wildcard sources/parsing_data/*.c) \
	  $(wildcard sources/quests/*.c) \
	  $(wildcard sources/intro/*.c) \
	  $(wildcard sources/game/*.c) \
	  $(wildcard sources/menu/*.c) \
	  $(wildcard sources/how_to_play/*.c) \
	  $(wildcard sources/pause_menu/*.c) \
	  $(wildcard sources/name/*.c) \
	  $(wildcard sources/buttons/*.c) \
	  $(wildcard sources/buttons/functions/*.c) \
	  $(wildcard sources/settings/*.c) \
	  $(wildcard sources/settings/keybind/*.c)	\
	  $(wildcard sources/player/*.c) \
	  $(wildcard sources/player/animations/*.c) \
	  $(wildcard sources/images/*.c) \
	  $(wildcard sources/map/*.c) \
	  $(wildcard sources/map/rectangles/*.c) \
	  $(wildcard sources/editor/*.c) \
	  $(wildcard sources/save/*.c) \
	  $(wildcard sources/fprintf/*.c) \
	  $(wildcard sources/enemies/*.c) \
	  $(wildcard sources/credits/*.c) \
	  $(wildcard sources/editor/rectangle/*.c) \
	  $(wildcard sources/editor/textures/*.c) \
	  $(wildcard sources/dialogs/*.c) \
	  $(wildcard sources/dialogs/scenes/*.c) \
	  $(wildcard lib/my/*.c) \

SRC = $(shell find . -name '*.c')

OBJ = $(SRC:%.c=%.o)
.SILENT:$(OBJ)

SFML_L = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -lm
CFLAGS = -Iinclude/ -Wno-deprecated

NAME = my_rpg

.SILENT:$(NAME)
$(NAME): $(OBJ)
	gcc $(CFLAGS) $(SFML_L) -o $(NAME) $(OBJ)
	@echo "\x1b[1m\x1b[32mCompilation done !\x1b[0m"

.PHONY: all
all: $(NAME)

.SILENT:clean
.PHONY: clean
clean:
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[33mThe project is now clean !\x1b[0m"

.SILENT:fclean
.PHONY: fclean
fclean: clean
	rm -f $(NAME)
	@echo "\x1b[1m\x1b[31mThe binary is now delete !\x1b[0m"

.PHONY: re
re: fclean all

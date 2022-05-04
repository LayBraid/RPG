##
## EPITECH PROJECT, 2022
## my_rpg
## File description:
## Makefile
##

SRC = $(shell find . -name '*.c')

OBJ = $(SRC:%.c=%.o)
.SILENT:$(OBJ)

SFML_L = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio
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

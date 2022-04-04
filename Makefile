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
	  $(wildcard sources/intro/*.c) \

OBJ = $(SRC:%.c=%.o)

SRC_LIB = -Llib -lmy
SFML_L = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio
CFLAGS = -Iinclude/

NAME = my_rpg

$(NAME): $(OBJ)
	cd lib/my && make
	gcc $(CFLAGS) $(SFML_L) $(SRC_LIB) -o $(NAME) $(OBJ)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	cd lib/my && make fclean
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

##
## EPITECH PROJECT, 2022
## my_rpg
## File description:
## Makefile
##

SRC = ./sources/main.c

OBJ = $(SRC:%.c=%.o)

CFLAGS = -lm -lcsfml-graphics -lcsfml-system \
		-lcsfml-window -lcsfml-audio -I ./include/

NAME = my_rpg

all: $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

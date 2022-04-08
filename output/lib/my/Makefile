##
## EPITECH PROJECT, 2021
## MY_RPG
## File description:
## No file there , just an epitech header example
##

SRC = $(wildcard *.c) \

OBJ = $(SRC:.c=.o)

NAME = lib
CFLAGS = -I.

$(NAME): $(OBJ)
	ar rc libmy.a *.o
	cp libmy.a ../
	cp libmy.a ../../

all: $(NAME)

fclean:
	make clean
	rm -f ../libmy.a
	rm -f libmy.a

clean:
	rm -f *.o output

re:
	make fclean
	make

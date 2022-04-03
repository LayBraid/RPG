##
## EPITECH PROJECT, 2021
## MY_RPG
## File description:
## No file there , just an epitech header example
##

SRC = getnbrr.c \
	  my_getnbr.c \
	  my_putchar.c \
	  my_putnbr.c \
	  my_putstr.c \
	  my_strcat.c \
	  my_strdup.c \
	  my_strlen.c \

OBJ = $(SRC:.c=.o)

NAME = lib
CFLAGS = -I./include

$(NAME): $(OBJ)
	ar rc libmy.a *.o
	cp libmy.a ../

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

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
	  my_strcmp.c \
	  my_strcpy.c \
	  my_strcat_c.c \

OBJ = $(SRC:.c=.o)

NAME = my
CFLAGS = -I.

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

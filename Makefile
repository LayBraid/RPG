##
## EPITECH PROJECT, 2022
## my_rpg
## File description:
## Makefile
##

SRC = ./sources/main.c \
	  ./sources/display/display_all.c \
	  ./sources/display/display_utils.c \
	  ./sources/structs/button_utils.c \
	  ./sources/structs/button.c \
	  ./sources/structs/data_creation.c \
	  ./sources/structs/inventory_utils.c \
	  ./sources/structs/inventory.c \
	  ./sources/structs/npc_utils_2.c \
	  ./sources/structs/npc_utils.c \
	  ./sources/structs/npc.c \
	  ./sources/structs/text_utils.c \
	  ./sources/structs/text.c \
	  ./sources/structs/texture_utils.c \
	  ./sources/structs/texture.c \
	  ./sources/structs/tiles_utils.c \
	  ./sources/structs/tiles.c \
	  ./sources/structs/video_utils.c \
	  ./sources/load/loading.c \
	  ./sources/utils/launch_rpg.c \
	  ./sources/utils/switch_scene.c \
	  ./sources/intro/init_intro.c \
	  ./sources/intro/make_intro.c	\
	  ./sources/intro/delete_intro.c	\
	  ./sources/menu/init_menu.c	\
	  ./sources/menu/make_menu.c	\
	  ./lib/my/my_getnbr.c \
	  ./lib/my/my_putchar.c \
	  ./lib/my/my_putnbr.c \
	  ./lib/my/my_putstr.c \
	  ./lib/my/my_strlen.c	\
	  ./lib/my/getnbrr.c	\
	  ./lib/my/my_strcat.c	\
	  ./lib/my/my_strdup.c \

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

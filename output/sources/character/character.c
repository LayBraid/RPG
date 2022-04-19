/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** character
*/

#include "my_rpg.h"

enum char_state {
    RUN_UP = 1,
    RUN_DOWN,
    RUN_LEFT,
    RUN_RIGHT,
    ATTACK,
};

texture_t *create_texture_player(texture_t *texture)
{
    texture = create_texture(texture, "../assets/game/Link.png", (sfIntRect *){0, 0, 275, 23});
}

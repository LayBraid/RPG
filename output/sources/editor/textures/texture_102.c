/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_102.c
*/

#include "editor.h"

void set_caves_entry41_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {796,605,8,8};
    rectangle->type = 381;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,719,8,8};
    rectangle->type = 382;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,719,8,8};
    rectangle->type = 383;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,719,8,8};
    rectangle->type = 384;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,719,8,8};
    rectangle->type = 385;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

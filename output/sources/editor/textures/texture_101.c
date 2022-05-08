/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_101.c
*/

#include "editor.h"

void set_enter_cave0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,719,8,8};
    rectangle->type = 386;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,727,8,8};
    rectangle->type = 386;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,727,8,8};
    rectangle->type = 387;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,727,8,8};
    rectangle->type = 388;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,727,8,8};
    rectangle->type = 389;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

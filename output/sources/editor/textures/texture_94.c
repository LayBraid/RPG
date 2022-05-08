/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_94.c
*/

#include "editor.h"

void set_enter_cave24_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,735,8,8};
    rectangle->type = 422;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,753,8,8};
    rectangle->type = 423;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,753,8,8};
    rectangle->type = 424;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,753,8,8};
    rectangle->type = 425;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,753,8,8};
    rectangle->type = 426;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

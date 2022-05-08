/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_91.c
*/

#include "editor.h"

void set_enter_cave32_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,769,8,8};
    rectangle->type = 435;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,777,8,8};
    rectangle->type = 435;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,777,8,8};
    rectangle->type = 436;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,777,8,8};
    rectangle->type = 437;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,777,8,8};
    rectangle->type = 438;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

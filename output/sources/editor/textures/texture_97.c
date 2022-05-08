/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_97.c
*/

#include "editor.h"

void set_enter_cave21_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,711,8,8};
    rectangle->type = 404;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,711,8,8};
    rectangle->type = 405;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,711,8,8};
    rectangle->type = 406;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,711,8,8};
    rectangle->type = 407;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,719,8,8};
    rectangle->type = 409;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

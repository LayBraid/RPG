/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_96.c
*/

#include "editor.h"

void set_enter_cave22_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,719,8,8};
    rectangle->type = 410;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,719,8,8};
    rectangle->type = 411;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,719,8,8};
    rectangle->type = 412;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,727,8,8};
    rectangle->type = 414;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,727,8,8};
    rectangle->type = 415;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

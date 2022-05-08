/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_90.c
*/

#include "editor.h"

void set_enter_cave33_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,777,8,8};
    rectangle->type = 439;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,745,8,8};
    rectangle->type = 440;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,745,8,8};
    rectangle->type = 441;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,745,8,8};
    rectangle->type = 442;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,745,8,8};
    rectangle->type = 443;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

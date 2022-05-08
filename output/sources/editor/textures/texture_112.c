/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_112.c
*/

#include "editor.h"

void set_water_edge0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {310,1995,8,8};
    rectangle->type = 299;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {318,1995,8,8};
    rectangle->type = 300;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {326,1995,8,8};
    rectangle->type = 301;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,548,8,8};
    rectangle->type = 302;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,548,8,8};
    rectangle->type = 303;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

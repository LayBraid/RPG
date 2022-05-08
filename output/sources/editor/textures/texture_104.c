/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_104.c
*/

#include "editor.h"

void set_caves_entry40_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {764,597,8,8};
    rectangle->type = 375;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {772,597,8,8};
    rectangle->type = 376;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {780,597,8,8};
    rectangle->type = 377;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {788,597,8,8};
    rectangle->type = 378;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {796,597,8,8};
    rectangle->type = 379;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_121.c
*/

#include "editor.h"

void set_house6_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,802,8,8};
    rectangle->type = 239;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,802,8,8};
    rectangle->type = 240;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,810,8,8};
    rectangle->type = 282;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,810,8,8};
    rectangle->type = 283;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,810,8,8};
    rectangle->type = 241;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_119.c
*/

#include "editor.h"

void set_house7_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,810,8,8};
    rectangle->type = 247;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,810,8,8};
    rectangle->type = 248;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,810,8,8};
    rectangle->type = 249;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,810,8,8};
    rectangle->type = 250;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,818,8,8};
    rectangle->type = 284;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

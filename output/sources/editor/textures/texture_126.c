/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_126.c
*/

#include "editor.h"

void set_house4_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,786,8,8};
    rectangle->type = 218;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,786,8,8};
    rectangle->type = 219;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,786,8,8};
    rectangle->type = 220;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,794,8,8};
    rectangle->type = 278;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,794,8,8};
    rectangle->type = 279;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

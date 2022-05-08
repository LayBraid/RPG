/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_47.c
*/

#include "editor.h"

void set_djpillar(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1422,1353,16,16};
    rectangle->type = 2087;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djpillar2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1422,1369,16,16};
    rectangle->type = 2088;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,719,16,16};
    rectangle->type = 2089;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,719,16,16};
    rectangle->type = 2090;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,719,8,8};
    rectangle->type = 2091;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

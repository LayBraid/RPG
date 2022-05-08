/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_46.c
*/

#include "editor.h"

void set_djbreach4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,727,8,8};
    rectangle->type = 2092;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,735,16,16};
    rectangle->type = 2093;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,735,16,16};
    rectangle->type = 2094;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,735,8,8};
    rectangle->type = 2095;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,743,8,8};
    rectangle->type = 2096;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_113.c
*/

#include "editor.h"

void set_poteau(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {313,48,8,8};
    rectangle->type = 293;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau20_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {331,40,8,8};
    rectangle->type = 294;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau21_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {331,48,8,8};
    rectangle->type = 296;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_eau_base(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,2046,8,8};
    rectangle->type = 297;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {302,1995,8,8};
    rectangle->type = 298;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

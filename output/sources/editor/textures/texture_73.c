/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_73.c
*/

#include "editor.h"

void set_bed8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,1349,8,8};
    rectangle->type = 2008;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {582,698,8,8};
    rectangle->type = 547;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,1349,8,8};
    rectangle->type = 2009;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {526,706,8,8};
    rectangle->type = 522;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,1349,8,8};
    rectangle->type = 2010;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

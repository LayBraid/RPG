/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_75.c
*/

#include "editor.h"

void set_bed3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,1333,8,8};
    rectangle->type = 2003;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {542,698,8,8};
    rectangle->type = 519;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,1341,8,8};
    rectangle->type = 2004;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {550,698,8,8};
    rectangle->type = 520;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,1341,8,8};
    rectangle->type = 2005;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

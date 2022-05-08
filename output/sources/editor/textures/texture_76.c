/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_76.c
*/

#include "editor.h"

void set_ground(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {2054,226,8,8};
    rectangle->type = 516;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,1333,8,8};
    rectangle->type = 2001;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {526,698,8,8};
    rectangle->type = 517;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,1333,8,8};
    rectangle->type = 2002;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {534,698,8,8};
    rectangle->type = 518;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

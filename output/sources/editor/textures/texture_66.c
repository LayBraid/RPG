/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_66.c
*/

#include "editor.h"

void set_mountain3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {526,722,8,8};
    rectangle->type = 532;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairstop(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1349,498,8,8};
    rectangle->type = 2026;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {534,722,8,8};
    rectangle->type = 533;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairsdown(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1358,498,8,8};
    rectangle->type = 2027;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {542,722,8,8};
    rectangle->type = 534;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_63.c
*/

#include "editor.h"

void set_stairsup(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1309,493,16,16};
    rectangle->type = 2032;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain4_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {526,730,8,8};
    rectangle->type = 537;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bench(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {897,1435,8,8};
    rectangle->type = 2033;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain4_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {534,730,8,8};
    rectangle->type = 538;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bench2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {905,1435,8,8};
    rectangle->type = 2034;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

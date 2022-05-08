/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_62.c
*/

#include "editor.h"

void set_mountain4_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {542,730,8,8};
    rectangle->type = 539;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bench3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {914,1435,8,8};
    rectangle->type = 2035;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain4_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {550,730,8,8};
    rectangle->type = 540;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {947,1369,16,16};
    rectangle->type = 2036;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain4_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {558,730,8,8};
    rectangle->type = 541;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

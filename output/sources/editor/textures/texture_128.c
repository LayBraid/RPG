/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_128.c
*/

#include "editor.h"

void set_house3_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,778,8,8};
    rectangle->type = 210;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,786,8,8};
    rectangle->type = 276;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,786,8,8};
    rectangle->type = 277;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,786,8,8};
    rectangle->type = 211;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,786,8,8};
    rectangle->type = 212;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

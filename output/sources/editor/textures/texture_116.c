/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_116.c
*/

#include "editor.h"

void set_house8_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,818,8,8};
    rectangle->type = 260;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,826,8,8};
    rectangle->type = 286;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,826,8,8};
    rectangle->type = 287;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,826,8,8};
    rectangle->type = 261;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,826,8,8};
    rectangle->type = 262;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

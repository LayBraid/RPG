/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_115.c
*/

#include "editor.h"

void set_house9_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,826,8,8};
    rectangle->type = 263;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,826,8,8};
    rectangle->type = 264;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,826,8,8};
    rectangle->type = 265;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,826,8,8};
    rectangle->type = 266;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,826,8,8};
    rectangle->type = 267;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_106.c
*/

#include "editor.h"

void set_caves_entry31_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,622,8,8};
    rectangle->type = 349;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry32_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,630,8,8};
    rectangle->type = 354;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry32_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,630,8,8};
    rectangle->type = 355;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry33_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,638,8,8};
    rectangle->type = 360;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry33_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,638,8,8};
    rectangle->type = 361;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

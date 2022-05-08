/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_110.c
*/

#include "editor.h"

void set_caves_entry3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,572,8,8};
    rectangle->type = 321;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry4_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,580,8,8};
    rectangle->type = 326;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry4_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,580,8,8};
    rectangle->type = 327;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry5_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,588,8,8};
    rectangle->type = 332;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry5_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,588,8,8};
    rectangle->type = 333;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

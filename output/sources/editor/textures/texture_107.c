/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_107.c
*/

#include "editor.h"

void set_caves_entry21_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {854,605,8,8};
    rectangle->type = 340;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {862,605,8,8};
    rectangle->type = 341;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry30_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,614,8,8};
    rectangle->type = 342;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry30_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,614,8,8};
    rectangle->type = 343;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry31_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,622,8,8};
    rectangle->type = 348;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

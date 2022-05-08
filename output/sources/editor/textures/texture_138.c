/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_138.c
*/

#include "editor.h"

void set_buisson2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 48, 16, 8};
    rectangle->type = 3;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_hole1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {253, 39, 16, 8};
    rectangle->type = 4;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {174,147,8,8};
    rectangle->type = 168;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,754,8,8};
    rectangle->type = 169;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,754,8,8};
    rectangle->type = 170;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

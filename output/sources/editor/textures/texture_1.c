/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_void(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {0, 0, 8, 8};
    rectangle->type = 0;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_grass(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 39, 8, 8};
    rectangle->type = 1;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {241, 39, 8, 8};
    rectangle->type = 2;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

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

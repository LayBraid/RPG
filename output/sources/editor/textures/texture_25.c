/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tronc2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {357,83,8,8};
    rectangle->type = 138;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {365,83,8,8};
    rectangle->type = 139;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {373,83,8,8};
    rectangle->type = 140;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {349,91,8,8};
    rectangle->type = 141;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {357,91,8,8};
    rectangle->type = 142;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

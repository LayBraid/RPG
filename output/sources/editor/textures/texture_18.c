/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree57(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,246,8,8};
    rectangle->type = 95;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree58(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,246,8,8};
    rectangle->type = 96;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree61(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,254,8,8};
    rectangle->type = 99;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree62(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,254,8,8};
    rectangle->type = 100;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree63(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,254,8,8};
    rectangle->type = 101;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

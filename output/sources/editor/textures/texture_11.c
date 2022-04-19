/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,214,8,8};
    rectangle->type = 52;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,214,8,8};
    rectangle->type = 53;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,214,8,8};
    rectangle->type = 54;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree17(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,214,8,8};
    rectangle->type = 55;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree18(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,214,8,8};
    rectangle->type = 56;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

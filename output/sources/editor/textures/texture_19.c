/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree64(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,254,8,8};
    rectangle->type = 102;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree65(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,254,8,8};
    rectangle->type = 103;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree66(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,254,8,8};
    rectangle->type = 104;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree67(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,254,8,8};
    rectangle->type = 105;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree68(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,254,8,8};
    rectangle->type = 106;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

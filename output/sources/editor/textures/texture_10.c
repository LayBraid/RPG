/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,206,8,8};
    rectangle->type = 45;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,206,8,8};
    rectangle->type = 46;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,214,8,8};
    rectangle->type = 49;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,214,8,8};
    rectangle->type = 50;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,214,8,8};
    rectangle->type = 51;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

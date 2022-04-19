/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree76(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,262,8,8};
    rectangle->type = 114;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree77(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,262,8,8};
    rectangle->type = 115;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree78(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,262,8,8};
    rectangle->type = 116;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree81(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,270,8,8};
    rectangle->type = 119;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree82(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,270,8,8};
    rectangle->type = 120;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

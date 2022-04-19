/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_panneau1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {270, 74, 16, 8};
    rectangle->type = 10;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_panneau2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {270, 82, 16, 8};
    rectangle->type = 11;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_support(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {287,74,16,8};
    rectangle->type = 12;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_support2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {287,82,16,8};
    rectangle->type = 13;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {17,122,8,8};
    rectangle->type = 14;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

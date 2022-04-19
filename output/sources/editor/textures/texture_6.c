/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_entry12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {41,138,8,8};
    rectangle->type = 25;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {17,146,8,8};
    rectangle->type = 26;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {25,146,8,8};
    rectangle->type = 27;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {33,146,8,8};
    rectangle->type = 28;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {41,146,8,8};
    rectangle->type = 29;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

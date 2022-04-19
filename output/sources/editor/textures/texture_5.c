/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_entry7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {33,130,8,8};
    rectangle->type = 20;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {41,130,8,8};
    rectangle->type = 21;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {17,138,8,8};
    rectangle->type = 22;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {25,138,8,8};
    rectangle->type = 23;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {33,138,8,8};
    rectangle->type = 24;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

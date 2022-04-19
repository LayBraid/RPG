/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_entry2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {25,122,8,8};
    rectangle->type = 15;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {33,122,8,8};
    rectangle->type = 16;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {41,122,8,8};
    rectangle->type = 17;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {17,130,8,8};
    rectangle->type = 18;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {25,130,8,8};
    rectangle->type = 19;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

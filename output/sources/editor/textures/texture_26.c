/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tronc7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {365,91,8,8};
    rectangle->type = 143;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {373,91,8,8};
    rectangle->type = 144;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {349,99,8,8};
    rectangle->type = 145;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {357,99,8,8};
    rectangle->type = 146;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {365,99,8,8};
    rectangle->type = 147;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

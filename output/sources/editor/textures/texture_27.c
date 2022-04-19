/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tronc12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {373,99,8,8};
    rectangle->type = 148;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {349,107,8,8};
    rectangle->type = 149;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {357,107,8,8};
    rectangle->type = 150;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {365,107,8,8};
    rectangle->type = 151;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {373,107,8,8};
    rectangle->type = 152;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

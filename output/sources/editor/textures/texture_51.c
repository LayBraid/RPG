/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_51.c
*/

#include "editor.h"

void set_djground22(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,819,16,16};
    rectangle->type = 2067;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {143,2046,8,8};
    rectangle->type = 2068;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {151,2046,8,8};
    rectangle->type = 2069;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {143,2054,8,8};
    rectangle->type = 2070;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {151,2054,8,8};
    rectangle->type = 2071;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

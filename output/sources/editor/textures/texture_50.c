/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_50.c
*/

#include "editor.h"

void set_djwater5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,2046,8,8};
    rectangle->type = 2072;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {61,2044,8,8};
    rectangle->type = 2073;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {69,2044,8,8};
    rectangle->type = 2074;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {61,2052,8,8};
    rectangle->type = 2075;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {69,2052,8,8};
    rectangle->type = 2076;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

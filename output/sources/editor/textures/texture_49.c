/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_49.c
*/

#include "editor.h"

void set_djcascade5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {61,2060,8,8};
    rectangle->type = 2077;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {69,2060,8,8};
    rectangle->type = 2078;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1282,1630,8,8};
    rectangle->type = 2079;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1290,1630,8,8};
    rectangle->type = 2080;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1298,1630,8,8};
    rectangle->type = 2081;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

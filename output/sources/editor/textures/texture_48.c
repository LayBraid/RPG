/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_48.c
*/

#include "editor.h"

void set_djdoortoboss4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1306,1630,8,8};
    rectangle->type = 2082;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1282,1638,8,8};
    rectangle->type = 2083;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1306,1638,8,8};
    rectangle->type = 2084;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1282,1646,8,8};
    rectangle->type = 2085;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1306,1646,8,8};
    rectangle->type = 2086;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

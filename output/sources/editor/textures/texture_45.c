/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_45.c
*/

#include "editor.h"

void set_djgroundlast(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1389,8,8};
    rectangle->type = 2097;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1389,8,8};
    rectangle->type = 2098;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1397,8,8};
    rectangle->type = 2099;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1397,8,8};
    rectangle->type = 2100;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1406,8,8};
    rectangle->type = 2101;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

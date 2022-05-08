/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_44.c
*/

#include "editor.h"

void set_djgroundlast6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1406,8,8};
    rectangle->type = 2102;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1406,8,8};
    rectangle->type = 2103;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1335,1406,8,8};
    rectangle->type = 2104;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1287,1414,8,8};
    rectangle->type = 2105;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1295,1414,8,8};
    rectangle->type = 2106;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_42.c
*/

#include "editor.h"

void set_djdoorlast8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1343,1414,8,8};
    rectangle->type = 2112;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1351,1414,8,8};
    rectangle->type = 2113;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1359,1414,8,8};
    rectangle->type = 2114;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1287,1422,8,8};
    rectangle->type = 2115;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1295,1422,8,8};
    rectangle->type = 2116;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

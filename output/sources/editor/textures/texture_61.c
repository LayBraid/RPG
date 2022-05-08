/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_61.c
*/

#include "editor.h"

void set_shelf15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {963,1369,16,16};
    rectangle->type = 2037;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain4_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {566,730,8,8};
    rectangle->type = 542;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {947,1385,16,16};
    rectangle->type = 2038;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain4_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {574,730,8,8};
    rectangle->type = 543;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf17(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {963,1385,16,16};
    rectangle->type = 2039;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

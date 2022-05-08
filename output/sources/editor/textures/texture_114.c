/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_114.c
*/

#include "editor.h"

void set_house9_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,826,8,8};
    rectangle->type = 268;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,826,8,8};
    rectangle->type = 269;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,826,8,8};
    rectangle->type = 288;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {322,40,8,8};
    rectangle->type = 290;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {322,48,8,8};
    rectangle->type = 292;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

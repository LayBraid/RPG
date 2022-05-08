/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_60.c
*/

#include "editor.h"

void set_mountain4_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {582,730,8,8};
    rectangle->type = 544;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {783,1496,8,8};
    rectangle->type = 2040;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {607,706,8,8};
    rectangle->type = 557;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {791,1411,8,8};
    rectangle->type = 2041;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {615,706,8,8};
    rectangle->type = 558;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

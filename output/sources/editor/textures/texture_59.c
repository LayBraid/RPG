/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_59.c
*/

#include "editor.h"

void set_doorh2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {799,1363,8,8};
    rectangle->type = 2042;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {623,706,8,8};
    rectangle->type = 559;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {807,1496,8,8};
    rectangle->type = 2043;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {631,706,8,8};
    rectangle->type = 560;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {783,1504,8,8};
    rectangle->type = 2044;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

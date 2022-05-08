/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_58.c
*/

#include "editor.h"

void set_mount_entry1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {607,714,8,8};
    rectangle->type = 561;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {807,1504,8,8};
    rectangle->type = 2045;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {615,714,8,8};
    rectangle->type = 562;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {783,1512,8,8};
    rectangle->type = 2046;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {623,714,8,8};
    rectangle->type = 563;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

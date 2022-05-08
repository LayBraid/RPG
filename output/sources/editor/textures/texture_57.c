/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_57.c
*/

#include "editor.h"

void set_doorh7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {791,1512,8,8};
    rectangle->type = 2047;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {631,714,8,8};
    rectangle->type = 564;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {799,1512,8,8};
    rectangle->type = 2048;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {607,722,8,8};
    rectangle->type = 565;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {807,1512,8,8};
    rectangle->type = 2049;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

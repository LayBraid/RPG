/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_56.c
*/

#include "editor.h"

void set_mount_entry2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {615,722,8,8};
    rectangle->type = 566;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1ground(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1089,620,8,8};
    rectangle->type = 2050;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {623,722,8,8};
    rectangle->type = 567;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1114,600,16,16};
    rectangle->type = 2051;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {631,722,8,8};
    rectangle->type = 568;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

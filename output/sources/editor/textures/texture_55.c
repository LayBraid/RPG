/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_55.c
*/

#include "editor.h"

void set_dj1door2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1098,600,16,16};
    rectangle->type = 2052;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {607,730,8,8};
    rectangle->type = 569;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1114,616,16,16};
    rectangle->type = 2053;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {615,730,8,8};
    rectangle->type = 570;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1098,616,16,16};
    rectangle->type = 2054;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

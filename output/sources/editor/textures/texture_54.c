/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_54.c
*/

#include "editor.h"

void set_mount_entry3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {623,730,8,8};
    rectangle->type = 571;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1114,632,16,16};
    rectangle->type = 2055;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mount_entry3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {631,730,8,8};
    rectangle->type = 572;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1098,632,16,16};
    rectangle->type = 2056;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_plain(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {86,580,16,16};
    rectangle->type = 573;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

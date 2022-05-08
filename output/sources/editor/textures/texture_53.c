/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_53.c
*/

#include "editor.h"

void set_dj1hole(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,703,16,16};
    rectangle->type = 2057;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,703,16,16};
    rectangle->type = 2058;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,719,16,16};
    rectangle->type = 2059;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,719,16,16};
    rectangle->type = 2060;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,735,8,8};
    rectangle->type = 2061;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

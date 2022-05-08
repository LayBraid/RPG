/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_52.c
*/

#include "editor.h"

void set_dj1hole6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,735,8,8};
    rectangle->type = 2062;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,735,8,8};
    rectangle->type = 2063;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,735,8,8};
    rectangle->type = 2064;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djground2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {948,819,16,16};
    rectangle->type = 2065;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djground21(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {965,819,16,16};
    rectangle->type = 2066;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

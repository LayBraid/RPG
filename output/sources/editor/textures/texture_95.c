/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_95.c
*/

#include "editor.h"

void set_enter_cave23_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,727,8,8};
    rectangle->type = 416;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,727,8,8};
    rectangle->type = 417;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,735,8,8};
    rectangle->type = 419;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,735,8,8};
    rectangle->type = 420;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,735,8,8};
    rectangle->type = 421;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

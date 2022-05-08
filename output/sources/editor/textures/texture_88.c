/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_88.c
*/

#include "editor.h"

void set_enter_cave42_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,761,8,8};
    rectangle->type = 451;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,761,8,8};
    rectangle->type = 452;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,761,8,8};
    rectangle->type = 453;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,769,8,8};
    rectangle->type = 455;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,769,8,8};
    rectangle->type = 456;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

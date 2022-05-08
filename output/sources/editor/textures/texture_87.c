/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_87.c
*/

#include "editor.h"

void set_enter_cave43_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,769,8,8};
    rectangle->type = 457;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,769,8,8};
    rectangle->type = 458;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,777,8,8};
    rectangle->type = 460;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,777,8,8};
    rectangle->type = 461;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,777,8,8};
    rectangle->type = 462;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

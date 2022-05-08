/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_98.c
*/

#include "editor.h"

void set_enter_cave3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,743,8,8};
    rectangle->type = 398;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,703,8,8};
    rectangle->type = 399;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,703,8,8};
    rectangle->type = 400;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,703,8,8};
    rectangle->type = 401;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,703,8,8};
    rectangle->type = 402;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

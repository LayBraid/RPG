/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_108.c
*/

#include "editor.h"

void set_caves_entry20_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {862,597,8,8};
    rectangle->type = 339;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {822,605,8,8};
    rectangle->type = 336;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {830,605,8,8};
    rectangle->type = 337;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {838,605,8,8};
    rectangle->type = 338;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {846,605,8,8};
    rectangle->type = 339;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

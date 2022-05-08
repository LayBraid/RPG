/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_69.c
*/

#include "editor.h"

void set_shelf6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1417,8,8};
    rectangle->type = 2018;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {534,714,8,8};
    rectangle->type = 528;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1426,8,8};
    rectangle->type = 2019;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {542,714,8,8};
    rectangle->type = 529;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {954,1426,8,8};
    rectangle->type = 2020;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_71.c
*/

#include "editor.h"

void set_shelf(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1409,8,8};
    rectangle->type = 2013;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {558,706,8,8};
    rectangle->type = 526;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {962,1409,8,8};
    rectangle->type = 2014;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {566,706,8,8};
    rectangle->type = 548;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1409,8,8};
    rectangle->type = 2015;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

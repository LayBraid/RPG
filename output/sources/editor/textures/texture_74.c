/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_74.c
*/

#include "editor.h"

void set_mountain0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {558,698,8,8};
    rectangle->type = 521;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,1341,8,8};
    rectangle->type = 2006;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {566,698,8,8};
    rectangle->type = 545;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,1341,8,8};
    rectangle->type = 2007;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {574,698,8,8};
    rectangle->type = 546;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

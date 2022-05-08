/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_72.c
*/

#include "editor.h"

void set_mountain1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {534,706,8,8};
    rectangle->type = 523;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,1349,8,8};
    rectangle->type = 2011;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {542,706,8,8};
    rectangle->type = 524;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_groundbed(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {918,1337,8,8};
    rectangle->type = 2012;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {550,706,8,8};
    rectangle->type = 525;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

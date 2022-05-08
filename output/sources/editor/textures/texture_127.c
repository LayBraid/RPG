/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_127.c
*/

#include "editor.h"

void set_house4_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,786,8,8};
    rectangle->type = 213;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,786,8,8};
    rectangle->type = 214;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,786,8,8};
    rectangle->type = 215;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,786,8,8};
    rectangle->type = 216;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,786,8,8};
    rectangle->type = 217;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

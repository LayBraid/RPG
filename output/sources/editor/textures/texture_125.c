/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_125.c
*/

#include "editor.h"

void set_house5_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,794,8,8};
    rectangle->type = 221;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,794,8,8};
    rectangle->type = 222;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,794,8,8};
    rectangle->type = 223;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,794,8,8};
    rectangle->type = 224;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,794,8,8};
    rectangle->type = 225;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

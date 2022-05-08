/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_137.c
*/

#include "editor.h"

void set_house0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,754,8,8};
    rectangle->type = 171;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,754,8,8};
    rectangle->type = 172;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,754,8,8};
    rectangle->type = 173;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,754,8,8};
    rectangle->type = 174;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,754,8,8};
    rectangle->type = 175;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_120.c
*/

#include "editor.h"

void set_house7_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,810,8,8};
    rectangle->type = 242;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,810,8,8};
    rectangle->type = 243;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,810,8,8};
    rectangle->type = 244;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,810,8,8};
    rectangle->type = 245;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,810,8,8};
    rectangle->type = 246;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_123.c
*/

#include "editor.h"

void set_house6_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,802,8,8};
    rectangle->type = 280;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,802,8,8};
    rectangle->type = 281;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,802,8,8};
    rectangle->type = 231;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,802,8,8};
    rectangle->type = 232;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,802,8,8};
    rectangle->type = 233;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

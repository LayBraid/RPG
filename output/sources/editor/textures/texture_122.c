/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_122.c
*/

#include "editor.h"

void set_house6_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,802,8,8};
    rectangle->type = 234;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,802,8,8};
    rectangle->type = 235;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,802,8,8};
    rectangle->type = 236;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,802,8,8};
    rectangle->type = 237;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,802,8,8};
    rectangle->type = 238;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

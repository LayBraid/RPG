/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_89.c
*/

#include "editor.h"

void set_enter_cave41_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,753,8,8};
    rectangle->type = 445;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,753,8,8};
    rectangle->type = 446;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,753,8,8};
    rectangle->type = 447;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,753,8,8};
    rectangle->type = 448;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,761,8,8};
    rectangle->type = 450;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

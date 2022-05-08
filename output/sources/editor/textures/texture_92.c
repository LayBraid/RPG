/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_92.c
*/

#include "editor.h"

void set_enter_cave31_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,761,8,8};
    rectangle->type = 431;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,769,8,8};
    rectangle->type = 431;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,769,8,8};
    rectangle->type = 432;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,769,8,8};
    rectangle->type = 433;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,769,8,8};
    rectangle->type = 434;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

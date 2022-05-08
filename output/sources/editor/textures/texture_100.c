/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_100.c
*/

#include "editor.h"

void set_enter_cave1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,727,8,8};
    rectangle->type = 390;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,735,8,8};
    rectangle->type = 390;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,735,8,8};
    rectangle->type = 391;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,735,8,8};
    rectangle->type = 392;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,735,8,8};
    rectangle->type = 393;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

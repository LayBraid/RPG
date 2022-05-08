/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_93.c
*/

#include "editor.h"

void set_enter_cave30_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,753,8,8};
    rectangle->type = 427;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,761,8,8};
    rectangle->type = 427;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,761,8,8};
    rectangle->type = 428;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,761,8,8};
    rectangle->type = 429;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,761,8,8};
    rectangle->type = 430;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

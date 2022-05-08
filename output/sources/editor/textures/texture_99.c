/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_99.c
*/

#include "editor.h"

void set_enter_cave2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,735,8,8};
    rectangle->type = 394;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,743,8,8};
    rectangle->type = 394;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,743,8,8};
    rectangle->type = 395;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,743,8,8};
    rectangle->type = 396;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,743,8,8};
    rectangle->type = 397;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

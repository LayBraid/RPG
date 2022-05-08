/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_86.c
*/

#include "editor.h"

void set_enter_cave44_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,777,8,8};
    rectangle->type = 463;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,850,8,8};
    rectangle->type = 468;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,850,8,8};
    rectangle->type = 469;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,850,8,8};
    rectangle->type = 470;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,850,8,8};
    rectangle->type = 471;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

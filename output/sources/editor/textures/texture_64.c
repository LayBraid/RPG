/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_64.c
*/

#include "editor.h"

void set_mountain3_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {566,722,8,8};
    rectangle->type = 554;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_table2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {867,1354,16,16};
    rectangle->type = 2030;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain3_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {574,722,8,8};
    rectangle->type = 555;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_table3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {884,1354,16,16};
    rectangle->type = 2031;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain3_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {582,722,8,8};
    rectangle->type = 556;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

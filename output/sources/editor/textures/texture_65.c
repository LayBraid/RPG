/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_65.c
*/

#include "editor.h"

void set_bed12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {631,1369,8,8};
    rectangle->type = 2028;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {550,722,8,8};
    rectangle->type = 535;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_groundhouse(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {901,1337,16,16};
    rectangle->type = 2028;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {558,722,8,8};
    rectangle->type = 536;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_table(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {850,1354,16,16};
    rectangle->type = 2029;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

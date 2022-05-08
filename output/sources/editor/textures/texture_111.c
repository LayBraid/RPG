/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_111.c
*/

#include "editor.h"

void set_caves_entry1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,556,8,8};
    rectangle->type = 308;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,556,8,8};
    rectangle->type = 309;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,564,8,8};
    rectangle->type = 314;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,564,8,8};
    rectangle->type = 315;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,572,8,8};
    rectangle->type = 320;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

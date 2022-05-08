/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_129.c
*/

#include "editor.h"

void set_house3_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,778,8,8};
    rectangle->type = 205;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,778,8,8};
    rectangle->type = 206;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,778,8,8};
    rectangle->type = 207;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,778,8,8};
    rectangle->type = 208;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,778,8,8};
    rectangle->type = 209;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

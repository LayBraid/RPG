/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_124.c
*/

#include "editor.h"

void set_house5_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,794,8,8};
    rectangle->type = 226;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,794,8,8};
    rectangle->type = 227;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,794,8,8};
    rectangle->type = 228;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,794,8,8};
    rectangle->type = 229;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,794,8,8};
    rectangle->type = 230;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

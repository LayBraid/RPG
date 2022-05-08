/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_136.c
*/

#include "editor.h"

void set_house0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,754,8,8};
    rectangle->type = 176;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,754,8,8};
    rectangle->type = 177;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,754,8,8};
    rectangle->type = 178;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,754,8,8};
    rectangle->type = 179;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,754,8,8};
    rectangle->type = 180;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_133.c
*/

#include "editor.h"

void set_house1_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,762,8,8};
    rectangle->type = 189;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,762,8,8};
    rectangle->type = 190;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,770,8,8};
    rectangle->type = 272;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,770,8,8};
    rectangle->type = 273;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,770,8,8};
    rectangle->type = 191;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

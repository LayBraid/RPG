/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_135.c
*/

#include "editor.h"

void set_house1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,762,8,8};
    rectangle->type = 179;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,762,8,8};
    rectangle->type = 270;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,762,8,8};
    rectangle->type = 271;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,762,8,8};
    rectangle->type = 182;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,762,8,8};
    rectangle->type = 183;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

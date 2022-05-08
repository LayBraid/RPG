/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_118.c
*/

#include "editor.h"

void set_house8_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,818,8,8};
    rectangle->type = 285;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,818,8,8};
    rectangle->type = 251;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,818,8,8};
    rectangle->type = 252;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,818,8,8};
    rectangle->type = 253;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,818,8,8};
    rectangle->type = 254;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

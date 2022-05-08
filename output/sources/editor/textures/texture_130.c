/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_130.c
*/

#include "editor.h"

void set_house3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,778,8,8};
    rectangle->type = 200;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,778,8,8};
    rectangle->type = 201;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,778,8,8};
    rectangle->type = 202;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,778,8,8};
    rectangle->type = 203;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,778,8,8};
    rectangle->type = 204;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

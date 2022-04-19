/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_chemin1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {343,162,8,8};
    rectangle->type = 30;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {351,162,8,8};
    rectangle->type = 31;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {367,162,8,8};
    rectangle->type = 32;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {343,170,8,8};
    rectangle->type = 33;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {351,170,8,8};
    rectangle->type = 34;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

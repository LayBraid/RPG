/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree21(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,222,8,8};
    rectangle->type = 59;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree22(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,222,8,8};
    rectangle->type = 60;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree23(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,222,8,8};
    rectangle->type = 61;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree24(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,222,8,8};
    rectangle->type = 62;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree25(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,222,8,8};
    rectangle->type = 63;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

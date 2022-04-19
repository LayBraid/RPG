/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree33(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,230,8,8};
    rectangle->type = 71;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree34(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,230,8,8};
    rectangle->type = 72;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree35(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,230,8,8};
    rectangle->type = 73;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree36(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,230,8,8};
    rectangle->type = 74;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree37(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,230,8,8};
    rectangle->type = 75;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

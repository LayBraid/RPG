/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree45(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,238,8,8};
    rectangle->type = 83;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree46(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,238,8,8};
    rectangle->type = 84;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree47(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,238,8,8};
    rectangle->type = 85;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree48(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,238,8,8};
    rectangle->type = 86;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree51(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,246,8,8};
    rectangle->type = 89;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

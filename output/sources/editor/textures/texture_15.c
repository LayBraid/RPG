/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree38(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,230,8,8};
    rectangle->type = 76;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree41(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,238,8,8};
    rectangle->type = 79;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree42(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,238,8,8};
    rectangle->type = 80;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree43(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,238,8,8};
    rectangle->type = 81;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree44(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,238,8,8};
    rectangle->type = 82;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

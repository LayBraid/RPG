/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree71(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,262,8,8};
    rectangle->type = 109;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree72(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,262,8,8};
    rectangle->type = 110;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree73(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,262,8,8};
    rectangle->type = 111;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree74(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,262,8,8};
    rectangle->type = 112;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree75(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,262,8,8};
    rectangle->type = 113;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

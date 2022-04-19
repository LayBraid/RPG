/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,206,8,8};
    rectangle->type = 40;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,206,8,8};
    rectangle->type = 41;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,206,8,8};
    rectangle->type = 42;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {407,206,8,8};
    rectangle->type = 43;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,206,8,8};
    rectangle->type = 44;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

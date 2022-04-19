/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree88(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,270,8,8};
    rectangle->type = 126;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree91(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,278,8,8};
    rectangle->type = 129;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree92(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,278,8,8};
    rectangle->type = 130;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree93(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {391,278,8,8};
    rectangle->type = 131;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree94(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {399,278,8,8};
    rectangle->type = 132;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

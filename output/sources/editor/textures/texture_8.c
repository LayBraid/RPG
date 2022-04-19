/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_chemin6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {367,170,8,8};
    rectangle->type = 35;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {343,186,8,8};
    rectangle->type = 36;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {351,186,8,8};
    rectangle->type = 37;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {367,186,8,8};
    rectangle->type = 38;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,206,8,8};
    rectangle->type = 39;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

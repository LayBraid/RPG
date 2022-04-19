/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_tree26(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {415,222,8,8};
    rectangle->type = 64;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree27(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {423,222,8,8};
    rectangle->type = 65;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree28(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {431,222,8,8};
    rectangle->type = 66;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree31(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {375,230,8,8};
    rectangle->type = 69;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree32(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {383,230,8,8};
    rectangle->type = 70;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

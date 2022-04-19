/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_stairs1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {150,123,8,8};
    rectangle->type = 153;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {158,123,8,8};
    rectangle->type = 154;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {166,123,8,8};
    rectangle->type = 155;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {174,123,8,8};
    rectangle->type = 156;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {150,131,8,8};
    rectangle->type = 157;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

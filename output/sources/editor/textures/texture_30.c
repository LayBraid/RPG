/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_stairs11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {166,139,8,8};
    rectangle->type = 163;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {174,139,8,8};
    rectangle->type = 164;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {150,147,8,8};
    rectangle->type = 165;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {158,147,8,8};
    rectangle->type = 166;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {166,147,8,8};
    rectangle->type = 167;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

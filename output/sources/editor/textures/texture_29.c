/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_stairs6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {158,131,8,8};
    rectangle->type = 158;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {166,131,8,8};
    rectangle->type = 159;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {174,131,8,8};
    rectangle->type = 160;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {150,139,8,8};
    rectangle->type = 161;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {158,139,8,8};
    rectangle->type = 162;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

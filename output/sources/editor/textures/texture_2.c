/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_hole2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {253, 48, 16, 8};
    rectangle->type = 5;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_souch1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {287, 57, 16, 8};
    rectangle->type = 6;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_souch2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {287, 65, 16, 8};
    rectangle->type = 7;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_trefle1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {304, 57, 16, 8};
    rectangle->type = 8;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_trefle2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {304, 65, 16, 8};
    rectangle->type = 9;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

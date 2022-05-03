/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

//TODO Change texture because is a random texture

void set_void_map(data_t *data, node_rectangle *rectangle)
{
    sfIntRect rect = {0, 0, 8, 8};
    rectangle->type = 0;
    sfRectangleShape_setTexture(rectangle->rectangle, data->tmp, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_grass_map(data_t *data, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 39, 8, 8};
    rectangle->type = 1;
    sfRectangleShape_setTexture(rectangle->rectangle, data->tmp, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson_map(data_t *data, node_rectangle *rectangle)
{
    sfIntRect rect = {241, 39, 8, 8};
    rectangle->type = 2;
    sfRectangleShape_setTexture(rectangle->rectangle, data->tmp, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}
/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_djboss14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1775,8,8};
    rectangle->type = 2162;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1775,8,8};
    rectangle->type = 2163;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1775,8,8};
    rectangle->type = 2164;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_snow(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {551,690,8,8};
    rectangle->type = 574;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_desert_herbe0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {28,282,16,8};
    rectangle->type = 575;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

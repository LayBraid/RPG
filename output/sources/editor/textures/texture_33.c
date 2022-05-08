/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_djboss9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1767,8,8};
    rectangle->type = 2157;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1767,8,8};
    rectangle->type = 2158;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1767,8,8};
    rectangle->type = 2159;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1767,8,8};
    rectangle->type = 2160;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1775,8,8};
    rectangle->type = 2161;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

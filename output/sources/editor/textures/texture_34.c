/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_djboss4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1751,8,8};
    rectangle->type = 2152;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1759,8,8};
    rectangle->type = 2153;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1759,8,8};
    rectangle->type = 2154;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1759,8,8};
    rectangle->type = 2155;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1759,8,8};
    rectangle->type = 2156;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

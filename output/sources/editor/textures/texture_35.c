/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_djtyphoon3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {302,2054,8,8};
    rectangle->type = 2147;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djtyphoon4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {310,2054,8,8};
    rectangle->type = 2148;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1751,8,8};
    rectangle->type = 2149;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1751,8,8};
    rectangle->type = 2150;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1751,8,8};
    rectangle->type = 2151;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

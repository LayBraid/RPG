/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_117.c
*/

#include "editor.h"

void set_house8_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,818,8,8};
    rectangle->type = 255;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,818,8,8};
    rectangle->type = 256;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,818,8,8};
    rectangle->type = 257;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,818,8,8};
    rectangle->type = 258;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,818,8,8};
    rectangle->type = 259;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_134.c
*/

#include "editor.h"

void set_house1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,762,8,8};
    rectangle->type = 184;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,762,8,8};
    rectangle->type = 185;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,762,8,8};
    rectangle->type = 186;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,762,8,8};
    rectangle->type = 187;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,762,8,8};
    rectangle->type = 188;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

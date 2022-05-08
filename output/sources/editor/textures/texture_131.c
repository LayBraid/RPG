/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_131.c
*/

#include "editor.h"

void set_house2_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,770,8,8};
    rectangle->type = 197;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,770,8,8};
    rectangle->type = 198;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,770,8,8};
    rectangle->type = 199;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,770,8,8};
    rectangle->type = 274;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,778,8,8};
    rectangle->type = 275;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

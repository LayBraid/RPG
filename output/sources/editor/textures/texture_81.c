/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_81.c
*/

#include "editor.h"

void set_village_house1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,890,8,8};
    rectangle->type = 498;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,890,8,8};
    rectangle->type = 499;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,890,8,8};
    rectangle->type = 500;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,890,8,8};
    rectangle->type = 501;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,890,8,8};
    rectangle->type = 486;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

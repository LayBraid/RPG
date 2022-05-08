/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_70.c
*/

#include "editor.h"

void set_mountain1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {574,706,8,8};
    rectangle->type = 549;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1417,8,8};
    rectangle->type = 2016;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {582,706,8,8};
    rectangle->type = 550;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {954,1417,8,8};
    rectangle->type = 2017;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {526,714,8,8};
    rectangle->type = 527;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_85.c
*/

#include "editor.h"

void set_village_house_top0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,850,8,8};
    rectangle->type = 472;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,850,8,8};
    rectangle->type = 473;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,850,8,8};
    rectangle->type = 474;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,850,8,8};
    rectangle->type = 475;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,858,8,8};
    rectangle->type = 510;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

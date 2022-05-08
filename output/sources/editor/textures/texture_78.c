/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_78.c
*/

#include "editor.h"

void set_village_house2_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,898,8,8};
    rectangle->type = 493;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,906,8,8};
    rectangle->type = 506;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,906,8,8};
    rectangle->type = 507;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,906,8,8};
    rectangle->type = 508;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,906,8,8};
    rectangle->type = 509;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

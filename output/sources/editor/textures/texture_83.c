/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_83.c
*/

#include "editor.h"

void set_village_house_top1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,858,8,8};
    rectangle->type = 476;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,858,8,8};
    rectangle->type = 477;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,882,8,8};
    rectangle->type = 478;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,882,8,8};
    rectangle->type = 479;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,882,8,8};
    rectangle->type = 480;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

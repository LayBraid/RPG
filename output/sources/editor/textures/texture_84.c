/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_84.c
*/

#include "editor.h"

void set_village_house_top1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,858,8,8};
    rectangle->type = 511;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,858,8,8};
    rectangle->type = 512;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,858,8,8};
    rectangle->type = 513;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,858,8,8};
    rectangle->type = 514;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,858,8,8};
    rectangle->type = 515;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

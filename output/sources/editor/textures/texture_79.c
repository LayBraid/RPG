/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_79.c
*/

#include "editor.h"

void set_village_house2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,898,8,8};
    rectangle->type = 504;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,898,8,8};
    rectangle->type = 505;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,898,8,8};
    rectangle->type = 490;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,898,8,8};
    rectangle->type = 491;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,898,8,8};
    rectangle->type = 492;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_80.c
*/

#include "editor.h"

void set_village_house1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,890,8,8};
    rectangle->type = 487;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,890,8,8};
    rectangle->type = 488;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,890,8,8};
    rectangle->type = 489;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,898,8,8};
    rectangle->type = 502;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,898,8,8};
    rectangle->type = 503;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

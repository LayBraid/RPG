/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_77.c
*/

#include "editor.h"

void set_village_house3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,906,8,8};
    rectangle->type = 494;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,906,8,8};
    rectangle->type = 495;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,906,8,8};
    rectangle->type = 496;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,906,8,8};
    rectangle->type = 497;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,1333,8,8};
    rectangle->type = 2000;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

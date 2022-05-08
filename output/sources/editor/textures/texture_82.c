/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_82.c
*/

#include "editor.h"

void set_village_house0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,882,8,8};
    rectangle->type = 481;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,882,8,8};
    rectangle->type = 482;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,882,8,8};
    rectangle->type = 483;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,882,8,8};
    rectangle->type = 484;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,882,8,8};
    rectangle->type = 485;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

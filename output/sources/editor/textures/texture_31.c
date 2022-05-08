/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_desert_herbe1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {28,290,16,8};
    rectangle->type = 577;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_cac0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {66,299,16,8};
    rectangle->type = 578;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_cac1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {66,307,16,8};
    rectangle->type = 581;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_cac2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {66,315,16,8};
    rectangle->type = 584;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_desert(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {83,299,16,16};
    rectangle->type = 585;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

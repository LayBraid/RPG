/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_68.c
*/

#include "editor.h"

void set_mountain2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {550,714,8,8};
    rectangle->type = 530;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {962,1426,8,8};
    rectangle->type = 2021;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {558,714,8,8};
    rectangle->type = 531;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1426,8,8};
    rectangle->type = 2022;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {566,714,8,8};
    rectangle->type = 551;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

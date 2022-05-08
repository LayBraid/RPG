/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_67.c
*/

#include "editor.h"

void set_shelf11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1434,8,8};
    rectangle->type = 2023;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {574,714,8,8};
    rectangle->type = 552;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {954,1434,8,8};
    rectangle->type = 2024;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_mountain2_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {582,714,8,8};
    rectangle->type = 553;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1434,8,8};
    rectangle->type = 2025;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

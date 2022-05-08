/*
** EPITECH PROJECT, 2022
** output
** File description:
** texture_132.c
*/

#include "editor.h"

void set_house2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,770,8,8};
    rectangle->type = 192;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,770,8,8};
    rectangle->type = 193;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,770,8,8};
    rectangle->type = 194;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,770,8,8};
    rectangle->type = 195;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,770,8,8};
    rectangle->type = 196;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_grass(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 39, 8, 8};
    rectangle->type = 1;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {241, 39, 8, 8};
    rectangle->type = 2;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

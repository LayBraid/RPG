/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_grass(editor_t *editor, sfRectangleShape *rectangle)
{
    sfIntRect rect = {233, 39, 8, 8};
    sfRectangleShape_setTexture(rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle, rect);
}

void set_buisson(editor_t *editor, sfRectangleShape *rectangle)
{
    sfIntRect rect = {241, 39, 8, 8};
    sfRectangleShape_setTexture(rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle, rect);
}

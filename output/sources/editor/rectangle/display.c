/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void display_rectangles(editor_t *editor)
{
    node_rectangle *tmp = editor->rectangles;

    while (tmp->id < tmp->next->id) {
        sfRenderWindow_drawRectangleShape(editor->window,
        tmp->rectangle, NULL);
        tmp = tmp->next;
    }
    sfRenderWindow_drawRectangleShape(editor->window, tmp->rectangle, NULL);
}

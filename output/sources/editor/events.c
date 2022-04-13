/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void check_on_rectangles(editor_t *editor)
{
    sfVector2f mu = sfRenderWindow_mapPixelToCoords(editor->window,
    sfMouse_getPositionRenderWindow(editor->window),
    sfRenderWindow_getView(editor->window));
    node_rectangle *tmp = editor->rectangles;

    while (tmp->id < tmp->next->id) {
        if (mu.x > tmp->x * 15 + 200 && mu.x < tmp->x * 15 + 215 &&
            mu.y > tmp->y * 15 && mu.y < tmp->y * 15 + 15) {
            set_texture_rectangle(editor, tmp);
            return;
        }
        tmp = tmp->next;
    }
    if (mu.x > tmp->x * 15 + 200 && mu.x < tmp->x * 15 + 215 &&
        mu.y > tmp->y * 15 && mu.y < tmp->y * 15 + 15) {
        set_texture_rectangle(editor, tmp);
        return;
    }
}

void check_events(editor_t *editor)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(editor->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(editor->window);
        if (event.type == sfEvtMouseButtonPressed)
            check_on_rectangles(editor);
    }
}

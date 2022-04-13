/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

static void check_on_rectangles(editor_t *editor)
{
    sfVector2f mu = sfRenderWindow_mapPixelToCoords(editor->window,
    sfMouse_getPositionRenderWindow(editor->window),
    sfRenderWindow_getView(editor->window));
    node_rectangle *tmp = editor->rectangles;

    while (tmp->id < tmp->next->id) {
        if (mu.x > tmp->x * 15 && mu.x < tmp->x * 15 + 15 &&
            mu.y > tmp->y * 15 && mu.y < tmp->y * 15 + 15) {
            editor->textures->function(editor, tmp->rectangle);
            return;
        }
        tmp = tmp->next;
    }
    if (mu.x > tmp->x * 15 && mu.x < tmp->x * 15 + 15 &&
        mu.y > tmp->y * 15 && mu.y < tmp->y * 15 + 15) {
        editor->textures->function(editor, tmp->rectangle);
        return;
    }
}

static void check_for_move(editor_t *editor, sfEvent event)
{
    if (event.key.code == sfKeyZ) {
        sfView_move(editor->view, (sfVector2f) {0, -10});
    }
    if (event.key.code == sfKeyS) {
        sfView_move(editor->view, (sfVector2f) {0, 10});
    }
    if (event.key.code == sfKeyD) {
        sfView_move(editor->view, (sfVector2f) {10, 0});
    }
    if (event.key.code == sfKeyQ) {
        sfView_move(editor->view, (sfVector2f) {-10, 0});
    }
}

static void check_keys(editor_t *editor, sfEvent event)
{
    check_for_move(editor, event);
    if (event.key.code == sfKeyA) {
        sfView_zoom(editor->view, 0.9f);
    }
    if (event.key.code == sfKeyE) {
        sfView_zoom(editor->view, 1.1f);
    }
    if (event.key.code == sfKeyRight)
        editor->textures = editor->textures->next;
    if (event.key.code == sfKeyLeft)
        editor->textures = editor->textures->prev;
}

void check_events(editor_t *editor)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(editor->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(editor->window);
        if (event.type == sfEvtMouseButtonPressed)
            editor->press = 1;
        if (editor->press)
            check_on_rectangles(editor);
        if (event.type == sfEvtMouseButtonReleased)
            editor->press = 0;
        if (event.type == sfEvtKeyPressed)
            check_keys(editor, event);
    }
}

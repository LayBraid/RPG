/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

static void clock_anim(editor_t *editor)
{
    sfTime time = sfClock_getElapsedTime(editor->anim);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.3) {
        if (editor->anim_pos == 1) {
            sfRectangleShape_setOutlineColor(editor->current->rectangle,
            sfYellow);
            editor->anim_pos = 0;
        } else {
            sfRectangleShape_setOutlineColor(editor->current->rectangle,
            sfBlue);
            editor->anim_pos = 1;
        }
        sfClock_restart(editor->anim);
    }
}

static void check_on_rectangles(editor_t *editor)
{
    sfVector2f mu = sfRenderWindow_mapPixelToCoords(editor->window,
    sfMouse_getPositionRenderWindow(editor->window),
    sfRenderWindow_getView(editor->window));
    node_rectangle *tmp = editor->rectangles;

    while (tmp->id < tmp->next->id) {
        if (mu.x > tmp->x * 15 && mu.x < tmp->x * 15 + 15 &&
            mu.y > tmp->y * 15 && mu.y < tmp->y * 15 + 15) {
            editor->textures->function(editor->world, tmp);
            return;
        }
        tmp = tmp->next;
    }
    if (mu.x > tmp->x * 15 && mu.x < tmp->x * 15 + 15 &&
        mu.y > tmp->y * 15 && mu.y < tmp->y * 15 + 15) {
        editor->textures->function(editor->world, tmp);
        return;
    }
}

void check_for_move(editor_t *editor, sfEvent event)
{
    if (!editor->mode) {
        if (event.key.code == sfKeyR) {
            editor->mode = 1;
            return;
        }
        if (event.key.code == sfKeyZ)
            sfView_move(editor->view, (sfVector2f) {0, -20});
        if (event.key.code == sfKeyS)
            sfView_move(editor->view, (sfVector2f) {0, 20});
        if (event.key.code == sfKeyD)
            sfView_move(editor->view, (sfVector2f) {20, 0});
        if (event.key.code == sfKeyQ)
            sfView_move(editor->view, (sfVector2f) {-20, 0});
    }
    if (event.key.code == sfKeyEnter) {
        editor->mode = 0;
        editor->research = "";
        sfRectangleShape_setOutlineColor(editor->current->rectangle,
        sfRed);
    }
}

void check_events(editor_t *editor)
{
    sfEvent event;

    if (editor->mode) {
        draw_research(editor);
        clock_anim(editor);
    }
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

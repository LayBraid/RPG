/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void check_keys2(editor_t *editor, sfEvent event)
{
    if (editor->mode)
        research(editor, event);
    check_for_move(editor, event);
    if (!editor->mode) {
        if (event.key.code == sfKeyA)
            sfView_zoom(editor->view, 0.9f);
        if (event.key.code == sfKeyE)
            sfView_zoom(editor->view, 1.1f);
    }
}

void check_keys(editor_t *editor, sfEvent event)
{
    check_keys2(editor, event);
    if (event.key.code == sfKeyRight) {
        editor->textures = editor->textures->next;
        editor->textures->prev->function(editor->world, editor->current_prev);
        editor->textures->function(editor->world, editor->current);
        editor->textures->next->function(editor->world, editor->current_next);
    }
    if (event.key.code == sfKeyLeft) {
        editor->textures = editor->textures->prev;
        editor->textures->prev->function(editor->world, editor->current_prev);
        editor->textures->function(editor->world, editor->current);
        editor->textures->next->function(editor->world, editor->current_next);
    }
}

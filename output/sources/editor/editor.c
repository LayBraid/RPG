/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void my_editor(void)
{
    editor_t *editor = malloc(sizeof(editor_t));
    setup_editor(editor);

    while (sfRenderWindow_isOpen(editor->window)) {
        sfRenderWindow_clear(editor->window, sfRed);
        check_events(editor);
        sfRenderWindow_setView(editor->window, editor->main);
        sfRenderWindow_drawRectangleShape(editor->window,
        editor->background, NULL);
        sfRenderWindow_drawRectangleShape(editor->window,
        editor->current, NULL);
        sfRenderWindow_setView(editor->window, editor->view);
        display_rectangles(editor);
        sfRenderWindow_display(editor->window);
    }
}

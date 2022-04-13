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
        sfRenderWindow_clear(editor->window, sfBlack);
        check_events(editor);
        display_rectangles(editor);
        sfRenderWindow_display(editor->window);
    }
}

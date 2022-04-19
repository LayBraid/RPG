/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"
#include "my.h"

static void display(editor_t *editor)
{
    sfRenderWindow_setView(editor->window, editor->main);
    sfRenderWindow_drawRectangleShape(editor->window,
    editor->background, NULL);
    sfRenderWindow_setView(editor->window, editor->view);
    display_rectangles(editor);
    check_events(editor);
    sfRenderWindow_setView(editor->window, editor->preview);
    sfRenderWindow_drawRectangleShape(editor->window,
    editor->current->rectangle, NULL);
    sfRenderWindow_drawRectangleShape(editor->window,
    editor->current_prev->rectangle, NULL);
    sfRenderWindow_drawRectangleShape(editor->window,
    editor->current_next->rectangle, NULL);
}

void my_editor(char **av)
{
    editor_t *editor = malloc(sizeof(editor_t));
    editor->size = my_atoi(av[3]);
    editor->path = av[2];
    setup_editor(editor);
    update_data(editor);

    while (sfRenderWindow_isOpen(editor->window)) {
        sfRenderWindow_clear(editor->window, sfRed);
        display(editor);
        sfRenderWindow_display(editor->window);
    }
    set_data(editor);
}

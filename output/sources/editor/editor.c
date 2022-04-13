/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"
#include "my.h"

static void put_data(editor_t *editor, char *data)
{
    (void) editor;
}

static void set_data(editor_t *editor)
{
    char *file = "";

    while (editor->rectangles->id < editor->rectangles->next->id) {
        file = my_strcat_c(file, '[');
        file = my_strcat(file, my_itoa(editor->rectangles->type));
        file = my_strcat_c(file, ',');
        file = my_strcat(file, my_itoa(editor->rectangles->depth));
        file = my_strcat_c(file, ']');
        file = my_strcat(file, (editor->rectangles->x == (float)
        editor->size - 1 ? "\n" : " "));
        editor->rectangles = editor->rectangles->next;
    }
    file = my_strcat_c(file, '[');
    file = my_strcat(file, my_itoa(editor->rectangles->type));
    file = my_strcat_c(file, ',');
    file = my_strcat(file, my_itoa(editor->rectangles->depth));
    file = my_strcat_c(file, ']');
    file = my_strcat(file, (editor->rectangles->x == (float)
    editor->size - 1 ? "\n" : " "));
    put_data(editor, file);
}

void my_editor(char **av)
{
    editor_t *editor = malloc(sizeof(editor_t));
    editor->size = my_atoi(av[3]);
    editor->path = av[2];
    setup_editor(editor);

    while (sfRenderWindow_isOpen(editor->window)) {
        sfRenderWindow_clear(editor->window, sfRed);
        check_events(editor);
        sfRenderWindow_setView(editor->window, editor->main);
        sfRenderWindow_drawRectangleShape(editor->window,
        editor->background, NULL);
        sfRenderWindow_drawRectangleShape(editor->window,
        editor->current->rectangle, NULL);
        sfRenderWindow_setView(editor->window, editor->view);
        display_rectangles(editor);
        sfRenderWindow_display(editor->window);
    }
    set_data(editor);
}

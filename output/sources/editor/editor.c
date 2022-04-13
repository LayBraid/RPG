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
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfTexture *texture = sfTexture_createFromFile("assets/game/nono.png", NULL);
    sfRectangleShape_setTexture(rectangle, texture, sfTrue);
    sfRectangleShape_setSize(rectangle, (sfVector2f) {1500, 1500});

    while (sfRenderWindow_isOpen(editor->window)) {
        sfRenderWindow_clear(editor->window, sfRed);
        check_events(editor);
        sfRenderWindow_setView(editor->window, editor->main);
        sfRenderWindow_drawRectangleShape(editor->window, rectangle, NULL);
        sfRenderWindow_setView(editor->window, editor->view);
        display_rectangles(editor);
        sfRenderWindow_display(editor->window);
    }
}

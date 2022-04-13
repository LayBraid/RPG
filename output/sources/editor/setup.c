/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

const char *WORLD = "assets/game/Overworld tiles.png";

void setup_editor(editor_t *editor)
{
    sfVideoMode mode = {1500, 1500, 32};
    editor->window = sfRenderWindow_create(mode, "RPG Editor | By LayBraid",
    sfDefaultStyle,NULL);
    sfRenderWindow_setFramerateLimit(editor->window, 130);
    editor->rectangles = NULL;
    editor->press = 0;
    editor->textures = NULL;
    editor->textures = init_textures(editor);
    editor->world = sfTexture_createFromFile(WORLD, NULL);
    editor->view = sfView_create();
    sfView_setSize(editor->view, (sfVector2f) {750, 750});
    sfView_setCenter(editor->view, (sfVector2f) {370, 370});
    sfRenderWindow_setView(editor->window, editor->view);

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            add_rectangle(&editor->rectangles, i, j);
}

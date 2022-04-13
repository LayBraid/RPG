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
    sfVideoMode mode = {1700, 1500, 32};
    editor->window = sfRenderWindow_create(mode, "RPG Editor | By LayBraid",
    sfDefaultStyle,NULL);
    editor->rectangles = NULL;
    editor->textures = NULL;
    editor->textures = init_textures(editor);
    editor->menu = sfRectangleShape_create();
    sfRectangleShape_setSize(editor->menu, (sfVector2f) {200, 200});
    editor->world = sfTexture_createFromFile(WORLD, NULL);

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            add_rectangle(&editor->rectangles, i, j);
}

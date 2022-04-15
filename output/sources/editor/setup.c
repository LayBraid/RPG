/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

const char *WORLD = "assets/game/Overworld tiles.png";

static void setup_next(editor_t *editor)
{
    editor->background = sfRectangleShape_create();
    editor->current = malloc(sizeof(node_rectangle));
    editor->current_back = malloc(sizeof(node_rectangle));
    editor->current->rectangle = sfRectangleShape_create();
    editor->current_back->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(editor->current->rectangle,(sfVector2f) {80, 80});
    sfRectangleShape_setSize(editor->current_back->rectangle,
    (sfVector2f) {82, 82});
    sfRectangleShape_setPosition(editor->current->rectangle,
    (sfVector2f) {20, 20});
    sfRectangleShape_setPosition(editor->current_back->rectangle,
    (sfVector2f) {19, 19});
    editor->textures->function(editor, editor->current);
    sfRectangleShape_setFillColor(editor->current_back->rectangle, sfWhite);
    sfRectangleShape_setTexture(editor->background,
    sfTexture_createFromFile("assets/game/nono.png", NULL), sfTrue);
    sfRectangleShape_setSize(editor->background, (sfVector2f) {1500, 1500});
    for (int i = 0; i < editor->size; i++)
        for (int j = 0; j < editor->size; j++)
            add_rectangle(&editor->rectangles, i, j);
}

void setup_editor(editor_t *editor)
{
    sfVideoMode mode = {editor->size * 15, editor->size * 15, 32};
    editor->window = sfRenderWindow_create(mode, "RPG Editor | By LayBraid",
    sfDefaultStyle,NULL);
    sfRenderWindow_setFramerateLimit(editor->window, 130);
    editor->rectangles = NULL;
    editor->press = 0;
    editor->textures = NULL;
    editor->textures = init_textures(editor);
    editor->world = sfTexture_createFromFile(WORLD, NULL);
    editor->view = sfView_create();
    editor->main = sfView_create();
    sfView_setSize(editor->view, (sfVector2f) {1500,1500});
    sfView_setCenter(editor->view,(sfVector2f)
    {(float) 1500 / 2, (float) 1500 / 2});
    sfView_setSize(editor->main, (sfVector2f) {1500,1500});
    sfView_setCenter(editor->main, (sfVector2f)
    {(float) 1500 / 2, (float) 1500 / 2});
    setup_next(editor);
}

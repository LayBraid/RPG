/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

const char *WORLD = "assets/game/Overworld tiles.png";
const char *HOME = "assets/game/Overworld tiles.png";

static void set_next_setup(editor_t *editor)
{
    editor->anim_pos = 0;
    editor->anim = sfClock_create();
    editor->research = "";
}

static void set_view(editor_t *editor)
{
    editor->current->rectangle = sfRectangleShape_create();
    editor->current_prev->rectangle = sfRectangleShape_create();
    editor->current_next->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(editor->current->rectangle,(sfVector2f)
    {100, 100});
    sfRectangleShape_setSize(editor->current_prev->rectangle,(sfVector2f)
    {80, 80});
    sfRectangleShape_setSize(editor->current_next->rectangle,(sfVector2f)
    {80, 80});
    sfRectangleShape_setPosition(editor->current->rectangle,
    (sfVector2f) {120, 10});
    sfRectangleShape_setPosition(editor->current_next->rectangle,
    (sfVector2f) {235, 20});
    sfRectangleShape_setPosition(editor->current_prev->rectangle,
    (sfVector2f) {20, 20});
    editor->textures->prev->function(editor->world, editor->current_prev);
    editor->textures->function(editor->world, editor->current);
    editor->textures->next->function(editor->world, editor->current_next);
    editor->mode = 0;
    set_next_setup(editor);
}

static void setup_next(editor_t *editor)
{
    sfView_setSize(editor->main, (sfVector2f) {1500,1500});
    sfView_setCenter(editor->main, (sfVector2f)
    {(float) 1500 / 2, (float) 1500 / 2});
    editor->background = sfRectangleShape_create();
    editor->current = malloc(sizeof(node_rectangle));
    editor->current_prev = malloc(sizeof(node_rectangle));
    editor->current_next = malloc(sizeof(node_rectangle));
    set_view(editor);
    sfRectangleShape_setOutlineColor(editor->current->rectangle, sfRed);
    sfRectangleShape_setOutlineThickness(editor->current->rectangle, 5);
    sfRectangleShape_setOutlineColor(editor->current_next->rectangle, sfWhite);
    sfRectangleShape_setOutlineThickness(editor->current_next->rectangle, 5);
    sfRectangleShape_setOutlineColor(editor->current_prev->rectangle, sfWhite);
    sfRectangleShape_setOutlineThickness(editor->current_prev->rectangle, 5);
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
    editor->textures = init_textures();
    editor->world = sfTexture_createFromFile(WORLD, NULL);
    editor->home = sfTexture_createFromFile(HOME, NULL);
    editor->view = sfView_create();
    editor->main = sfView_create();
    editor->preview = sfView_create();
    sfView_setSize(editor->view, (sfVector2f) {1500,1500});
    sfView_setCenter(editor->view,(sfVector2f)
    {(float) 1500 / 2, (float) 1500 / 2});
    sfView_setSize(editor->preview, (sfVector2f) {1500,1500});
    sfView_setCenter(editor->preview,(sfVector2f)
    {(float) 1500 / 2, (float) 1500 / 2});
    setup_next(editor);
}

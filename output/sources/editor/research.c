/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"
#include "my.h"

void draw_research(editor_t *editor)
{
    sfFont *font = sfFont_createFromFile("assets/font.ttf");
    sfText *text = sfText_create();
    sfVector2f vector2F;
    if (!font)
        return;
    sfText_setString(text, editor->research);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfWhite);
    vector2F.x = 70;
    vector2F.y = 120;
    sfText_setPosition(text, vector2F);
    sfRenderWindow_drawText(editor->window, text, NULL);
}

static int equal_items(const char *s1, const char *s2)
{
    int items = 0;

    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++, items++) {
        if (s1[i] != s2[i])
            return items;
    }
    return items;
}

static void search_texture(editor_t *editor)
{
    node_texture *tmp = editor->textures;
    int max = 0;
    int id = 0;

    while (tmp->id != 0)
        tmp = tmp->next;
    while (tmp->id < tmp->next->id) {
        if (equal_items(editor->research, tmp->name) > max) {
            max = equal_items(editor->research, tmp->name);
            id = tmp->id;
        }
        tmp = tmp->next;
    }
    if (equal_items(editor->research, tmp->name) > max)
        id = tmp->id;
    while (editor->textures->id != id)
        editor->textures = editor->textures->next;
    editor->textures->prev->function(editor->world, editor->current_prev);
    editor->textures->function(editor->world, editor->current);
    editor->textures->next->function(editor->world, editor->current_next);
}

void research(editor_t *editor, sfEvent event)
{
    if (event.key.code == 55)
        editor->research = my_strcat_c(editor->research, '_');
    if (event.key.code >= sfKeyA && event.key.code <= sfKeyZ)
        editor->research = my_strcat_c(editor->research, event.key.code + 'a');
    if (event.key.code == sfKeyBack)
        editor->research[my_strlen(editor->research) - 1] = '\0';
    if (event.key.code >= sfKeyNum0 && event.key.code <= sfKeyNum9)
        editor->research = my_strcat_c(editor->research,
        event.key.code - 26 + '0');
    search_texture(editor);
}

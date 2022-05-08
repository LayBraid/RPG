/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"
#include "my.h"
#include "utils.h"
#include "my_fprintf.h"

void set_data(editor_t *editor)
{
    FILE *input = fopen(my_strcat("data/", editor->path), "w");
    char *file = "";

    while (editor->rectangles->id < editor->rectangles->next->id) {
        file = my_strcat(file, my_fprintf("[%d,%d]",
        editor->rectangles->type, 0));
        file = my_strcat(file,
        (editor->rectangles->x == (float) editor->size - 1 ? "\n" : " "));
        editor->rectangles = editor->rectangles->next;
    }
    file = my_strcat(file, my_fprintf("[%d,%d]", editor->rectangles->type, 0));
    fwrite(file, 1, my_strlen(file), input);
}

static void update_texture(editor_t *editor, char *buffer,
node_rectangle *rectangle)
{
    node_texture *texture = editor->textures;
    rectangle->type = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, '[', 0) + 1,get_it_char(buffer, ',', 0) - 1));
    rectangle->depth = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 0) + 1,get_it_char(buffer, ']', 0) - 1));

    while (texture->id_r != rectangle->type)
        texture = texture->next;
    texture->function(editor->world, rectangle);
}

void update_data(editor_t *editor)
{
    node_rectangle *rectangle = editor->rectangles;
    char *data = get_in_buffer(my_strcat("data/", editor->path));
    int info[3] = {0};

    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] == '[')
            info[0] = i;
        if (data[i] == ']') {
            info[1] = i;
            update_texture(editor,
            extract_between_limits(data, info[0], info[1]), rectangle);
            rectangle = rectangle->next;
        }
    }
}

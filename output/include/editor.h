/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#ifndef OUTPUT_EDITOR_H
    #define OUTPUT_EDITOR_H

    #include "structures.h"

enum Tiles {
    GRASS,
    ROAD,
};

void my_editor(void);

void setup_editor(editor_t *editor);

void add_rectangle(node_rectangle **node, int i, int j);

void display_rectangles(editor_t *editor);

void check_events(editor_t *editor);

void set_texture_rectangle(editor_t *editor, node_rectangle *rectangle);

node_texture *init_textures(editor_t *editor);

void add_next_texture(node_texture **node,
void (*function)(editor_t *editor, sfRectangleShape *rectangle));

void setup_first_texture(node_texture **node,
void (*function)(editor_t *editor, sfRectangleShape *rectangle));

void set_grass(editor_t *editor, sfRectangleShape *rectangle);

void set_buisson(editor_t *editor, sfRectangleShape *rectangle);

#endif

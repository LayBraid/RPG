/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

node_texture *init_textures(editor_t *editor)
{
    node_texture *texture = malloc(sizeof(node_texture));

    setup_first_texture(&texture, set_void);
    add_next_texture(&texture, set_grass);
    add_next_texture(&texture, set_buisson);
    return texture;
}

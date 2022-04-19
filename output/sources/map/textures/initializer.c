/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

node_texture_map *init_textures_map(void)
{
    node_texture_map *texture = malloc(sizeof(node_texture_map));

    setup_first_texture_map(&texture, set_void_map);
    add_next_texture_map(&texture, set_grass_map);
    add_next_texture_map(&texture, set_buisson_map);
    return texture;
}
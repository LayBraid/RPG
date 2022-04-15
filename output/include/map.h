/*
** EPITECH PROJECT, 2022
** output
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

#include "my_rpg.h"

void create_map_from_file(data_t *data, char *filepath);

void get_map(data_t *data);

node_texture_map *init_textures_map(data_t *editor);

void add_next_texture_map(node_texture_map **node,
void (*function)(data_t *data, node_rectangle *rectangle));

void setup_first_texture_map(node_texture_map **node,
void (*function)(data_t *data, node_rectangle *rectangle));

void set_void(data_t *data, node_rectangle *rectangle);

void set_grass(data_t *data, node_rectangle *rectangle);

void set_buisson(data_t *data, node_rectangle *rectangle);

#endif /* !MAP_H_ */

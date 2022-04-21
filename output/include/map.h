/*
** EPITECH PROJECT, 2022
** output
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

    #include "structures.h"

    #define MAP_PATH "data/hyrule"
    #define SIZE_MAP 100

enum entity_game {
    PLAYER,
    NPC,
};

void create_map_from_file(data_t *data, char *filepath);

void get_map(data_t *data);

void add_map(data_t *data, const float info[4]);

void display_rectangles_map(data_t *data);

void setup_collisions(data_t *data);

#endif /* !MAP_H_ */

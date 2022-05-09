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

enum Entity_list {
    VOID,
    PLAYER,
    ENEMY,
    NPC,
};

void create_map_from_file(data_t *data, char *filepath);

void get_map(data_t *data);

void add_map(data_t *data, const float info[4]);

void display_rectangles_map(data_t *data);

void setup_collisions(data_t *data);

void set_map(data_t *data, int map);

void hyrule_move_down(data_t *data);

void hyrule_move_up(data_t *data);

void hyrule_move_right(data_t *data);

void hyrule_move_left(data_t *data);

void tophouse_move_down(data_t *data);

void tophouse_move_up(data_t *data);

void tophouse_move_right(data_t *data);

void tophouse_move_left(data_t *data);

void house_move_down(data_t *data);

void house_move_up(data_t *data);

void house_move_right(data_t *data);

void house_move_left(data_t *data);

void dj_move_down(data_t *data);

void dj_move_up(data_t *data);

void dj_move_right(data_t *data);

void dj_move_left(data_t *data);

void add_map_tophouse(data_t *data, const float info[4]);

void get_map_tophouse(data_t *data);

void setup_collisions_tophouse(data_t *data);

void display_rectangles_tophouse(data_t *data);

void setup_collisions_house(data_t *data);

void get_map_house(data_t *data);

void add_map_house(data_t *data, const float info[4]);

void display_rectangles_house(data_t *data);

void setup_collisions_dj(data_t *data);

void add_map_dj(data_t *data, const float info[4]);

void get_map_dj(data_t *data);

#endif /* !MAP_H_ */

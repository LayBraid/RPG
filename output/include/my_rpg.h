/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_rpg
*/

#ifndef MY_RPG_H
    #define MY_RPG_H

    #include "structures.h"

enum GAME_STATUS {
    OPENING,
    MAIN_MENU,
    GAME,
    QUESTS,
    SETTINGS,
    END,
};

//move_select_b.c
void go_left2(data_t *data, tile_t *tile, sfVector2f pos);
void go_right2(data_t *data, tile_t *tile, sfVector2f pos);
void go_up2(data_t *data, tile_t *tile, sfVector2f pos);
void go_down2(data_t *data, tile_t *tile, sfVector2f pos);

void go_left3(data_t *data, tile_t *tile, sfVector2f pos);
void go_right3(data_t *data, tile_t *tile, sfVector2f pos);

//read_map2.c
void get_npcs(data_t *data, char *map);
void construct_map(data_t *data, char *map);
char *make_map(char *filepath);
void create_map_from_file(data_t *data, char *filepath);
int make_tile(data_t *data, char *map, int i, sfVector2f pos);
int make_npc(data_t *data, char *map, int i);


#endif

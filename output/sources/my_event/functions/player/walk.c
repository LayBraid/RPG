/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"
#include "map.h"

void player_walk_down(data_t *data)
{
    switch (data->my_map) {
        case 0: tophouse_move_down(data);
            break;
        case 1: house_move_down(data);
            break;
        case 2: hyrule_move_down(data);
            break;
        case 3: dj_move_down(data);
            break;
        default:
            break;
    }
}

void player_walk_up(data_t *data)
{
    switch (data->my_map) {
        case 0: tophouse_move_up(data);
            break;
        case 1: house_move_up(data);
            break;
        case 2: hyrule_move_up(data);
            break;
        case 3: dj_move_up(data);
            break;
        default:
            break;
    }
}

void player_walk_right(data_t *data)
{
    switch (data->my_map) {
        case 0: tophouse_move_right(data);
            break;
        case 1: house_move_right(data);
            break;
        case 2: hyrule_move_right(data);
            break;
        case 3: dj_move_right(data);
            break;
        default:
            break;
    }
}

void player_walk_left(data_t *data)
{
    switch (data->my_map) {
        case 0: tophouse_move_left(data);
            break;
        case 1: house_move_left(data);
            break;
        case 2: hyrule_move_left(data);
            break;
        case 3: dj_move_left(data);
            break;
        default:
            break;
    }
}

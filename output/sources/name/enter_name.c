/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "name.h"

void stop_anim_end(data_t *data)
{
    tile_t *tmp = data->tiles;

    while (tmp->id != NAME_END)
        tmp = tmp->next;
    tmp = set_tile_position(tmp, (sfVector2f){1500, 890});
    data->letter->state = 0;
}

void anim_end(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->letter->clock);
    float milli_seconds = sfTime_asMilliseconds(time);
    tile_t *tmp = data->tiles;

    while (tmp->id != NAME_END)
        tmp = tmp->next;
    if (milli_seconds > 500)
        tmp = set_tile_position(tmp, (sfVector2f){340, -900});
    if (milli_seconds > 1000) {
        tmp = set_tile_position(tmp, (sfVector2f){1500, 890});
        sfClock_restart(data->letter->clock);
    }
}

void enter_name(data_t *data)
{
    data->loading_state = 15;
    data->video.ui = 32;
}

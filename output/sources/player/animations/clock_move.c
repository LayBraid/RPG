/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

static void update_anim_move_player(data_t *data)
{
    if (data->player.state == NOTHING) {
        sfRectangleShape_setTextureRect(data->player.rectangle,
        get_rect_player(NOTHING, 0));
        return;
    }
    if (data->player.state == WALK_DOWN) {
        sfRectangleShape_setTextureRect(data->player.rectangle,
        get_rect_player(WALK_DOWN, data->player.animation));
        data->player.animation++;
        if (data->player.animation > 6)
            data->player.animation = 0;
    }
}

void clock_move_player(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->player.movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.15) {
        update_anim_move_player(data);
        sfClock_restart(data->player.movement_clock);
    }
}

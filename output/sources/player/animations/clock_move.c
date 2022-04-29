/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

void update_anim_move_player(data_t *data)
{
    if (data->player.scale_reverse == 0 && (data->player.state == WALK_LEFT ||
        data->player.state == IDLE_LEFT)) {
        sfRectangleShape_setScale(data->player.rectangle, (sfVector2f) {-1, 1});
        sfRectangleShape_move(data->player.rectangle, (sfVector2f) {14, 0});
        data->player.scale_reverse = !data->player.scale_reverse;
    }
    if (data->player.scale_reverse == 1 && (data->player.state != WALK_LEFT &&
        data->player.state != IDLE_LEFT)) {
        sfRectangleShape_setScale(data->player.rectangle, (sfVector2f) {1, 1});
        sfRectangleShape_move(data->player.rectangle, (sfVector2f) {-14, 0});
        data->player.scale_reverse = !data->player.scale_reverse;
    }
    sfRectangleShape_setTextureRect(data->player.rectangle,
    get_rect_player(data->player.state, data->player.animation));
    data->player.animation++;
    if (data->player.animation > 6)
        data->player.animation = 0;
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

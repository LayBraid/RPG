/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

void clock_stop_display_life(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->player.damage_display_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 2) {
        data->player.damage_display = 0;
        sfClock_restart(data->player.damage_display_clock);
    }
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my_event.h"

void clock_enemies_aggro(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->enemies_aggro);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.5) {
        call_event(data, "enemies_aggro");
        sfClock_restart(data->player.movement_clock);
    }
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** make_hud
*/

#include "hud.h"
#include "my_rpg.h"

void manage_stamina(data_t *data)
{
    data->objects = delete_all_objects(data->objects);
    init_hud(data);
}

void stamina_clock(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->enemies_aggro);
    double diff = time.microseconds / 1000000.0;

    if (diff >= 5) {
        if (data->player.stamina < 5)
            data->player.stamina += 1;
        sfClock_restart(data->enemies_aggro);
    }
}

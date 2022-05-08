/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "map.h"

void check_exit_top(data_t *data)
{
    if (data->player.position.y < 18 && data->player.position.x >= 110)
        set_map(data, 2);
}

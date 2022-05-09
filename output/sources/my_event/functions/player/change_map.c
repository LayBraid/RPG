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
    if (data->my_map == 0)
        if (data->player.position.y < 5 && data->player.position.x >= 120) {
            data->position_house = (sfVector2f) {120, 50};
            call_event(data, "go_downstairs");
            set_map(data, 1);
            return;
        }
    if (data->my_map == 1) {
        if (data->player.position.y < 5 && data->player.position.x >= 120) {
            data->position_tophouse = (sfVector2f) {120, 50};
            set_map(data, 0);
            return;
        }
        if (data->player.position.y > 80 && data->player.position.x >= 40 &&
            data->player.position.x <= 100) {
            set_map(data, 2);
            return;
        }
    }
}

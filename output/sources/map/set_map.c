/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

void set_map(data_t *data, int map)
{
    data->my_map = map;
    if (map == 2) {
        sfRectangleShape_setPosition(data->player.rectangle,
        data->position_hyrule);
    }
    if (map == 0) {
        sfRectangleShape_setPosition(data->player.rectangle,
        data->position_tophouse);
        sfView_setCenter(data->mapping, (sfVector2f) {50, 30});
    }
}

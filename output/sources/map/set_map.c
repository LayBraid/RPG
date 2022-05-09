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
        if (data->position_hyrule.x == 174 && data->position_hyrule.y == 2086)
            sfView_setCenter(data->mapping, (sfVector2f) {960 / 3, 2070});
        else
            sfView_setCenter(data->mapping, data->position_hyrule);
        sfRectangleShape_setPosition(data->player.rectangle,
        data->position_hyrule);
    }
    if (map == 0) {
        sfRectangleShape_setPosition(data->player.rectangle,
        data->position_tophouse);
        sfView_setCenter(data->mapping, data->position_tophouse);
    }
    if (map == 1) {
        sfRectangleShape_setPosition(data->player.rectangle,
        data->position_house);
        sfView_setCenter(data->mapping, data->position_house);
    }
    if (map == 3) {
        sfRectangleShape_setPosition(data->player.rectangle,
        data->position_dj);
        sfView_setCenter(data->mapping, data->position_dj);
    }
}

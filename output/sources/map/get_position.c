/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

sfVector2f get_position_div(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    player.x /= 15;
    player.y /= 15;
    return player;
}

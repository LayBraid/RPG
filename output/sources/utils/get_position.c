/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "map.h"

const int SIZE_2[3] = {30, 30, 150};

sfVector2i get_position(data_t *data, int entity, int index)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i cast;

    player.x /= 15;
    player.y /= 15;
    cast.x = (int) player.x;
    cast.y = (int) player.y + 1;
    return cast;
}

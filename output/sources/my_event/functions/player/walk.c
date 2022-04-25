/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"

void player_walk_keys(data_t *data)
{
    data->player.state = WALK_DOWN;
}

void player_walk_down(data_t *data)
{
    sfVector2f position = sfRectangleShape_getPosition(data->player.rectangle);
    if (position.y >= 1500 - 28)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, 1});
}

void player_walk_up(data_t *data)
{
    sfVector2f position = sfRectangleShape_getPosition(data->player.rectangle);
    if (position.y <= 28)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, -1});
}

void player_walk_right(data_t *data)
{
    sfVector2f position = sfRectangleShape_getPosition(data->player.rectangle);
    if (position.x >= 1500 - 16)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {1, 0});
}

void player_walk_left(data_t *data)
{
    sfVector2f position = sfRectangleShape_getPosition(data->player.rectangle);
    if (position.x <= 0)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {-1, 0});
}

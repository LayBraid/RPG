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
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    if (player.y >= 1500 - 28)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, 3});
    if (player.y < 1500 - 180 && player.y > 177)
        sfView_move(data->mapping, (sfVector2f) {0, 3});
}

void player_walk_up(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    if (player.y <= 28)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, -3});
    if (player.y > 360 && player.y < 1500 - 177)
        sfView_move(data->mapping, (sfVector2f) {0, -3});
}

void player_walk_right(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    if (player.x >= 1500 - 16)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {3, 0});
    if (player.x > 317 && player.x < 1500 - 317)
        sfView_move(data->mapping, (sfVector2f) {3, 0});
}

void player_walk_left(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    if (player.x <= 0)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {-3, 0});
    if (player.x > 320 && player.x < 1500 - 317)
        sfView_move(data->mapping, (sfVector2f) {-3, 0});
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"
#include "player.h"
#include "utils.h"
#include "my_event.h"

void tophouse_move_down(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.y >= 2250 - 28)
        return;
    if (!can_move(data->collisions_tophouse[position.y + 1][position.x]))
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, 3});
    if (player.y < 2250 - 180 && player.y > 177)
        sfView_move(data->mapping, (sfVector2f) {0, 3});
    data->player.state = WALK_DOWN;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
    data->position_tophouse = sfRectangleShape_getPosition(data->
    player.rectangle);
    call_event(data, "check_exit_top");
}

void tophouse_move_up(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.y <= 0)
        return;
    if (!can_move(data->collisions_tophouse[position.y - 1][position.x]))
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, -3});
    if (player.y > 360 && player.y < 2250 - 177)
        sfView_move(data->mapping, (sfVector2f) {0, -3});
    data->player.state = WALK_UP;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
    data->position_tophouse = sfRectangleShape_getPosition(data->
    player.rectangle);
    call_event(data, "check_exit_top");
}

void tophouse_move_right(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.x >= 2250 - 16)
        return;
    if (!can_move(data->collisions_tophouse[position.y][position.x + 1]))
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {3, 0});
    if (player.x > 317 && player.x < 2250 - 317)
        sfView_move(data->mapping, (sfVector2f) {3, 0});
    data->player.state = WALK_RIGHT;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
    data->position_tophouse = sfRectangleShape_getPosition(data->
    player.rectangle);
    call_event(data, "check_exit_top");
}

void tophouse_move_left(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.x <= 0)
        return;
    if (!can_move(data->collisions_tophouse[position.y][position.x - 1]))
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {-3, 0});
    if (player.x > 340 && player.x < 2250 - 317)
        sfView_move(data->mapping, (sfVector2f) {-3, 0});
    data->player.state = WALK_LEFT;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
    data->position_tophouse = sfRectangleShape_getPosition(data->
    player.rectangle);
    call_event(data, "check_exit_top");
}

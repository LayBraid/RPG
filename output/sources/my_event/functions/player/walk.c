/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"
#include "utils.h"
#include "map.h"

void player_walk_down(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.y >= 2250 - 28)
        return;
    if (!can_move(data->collisions_hyrule[position.y + 1][position.x]))
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, 3});
    if (data->y_pile == 12) {
        data->y_pile = 0;
        data->positions_hyrule[position.y + 1][position.x] = PLAYER;
        data->positions_hyrule[position.y][position.x] = 0;
    } else
        data->y_pile += 3;
    if (player.y < 2250 - 180 && player.y > 177)
        sfView_move(data->mapping, (sfVector2f) {0, 3});
    data->player.state = WALK_DOWN;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
}

void player_walk_up(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.y <= 28)
        return;
    if (!can_move(data->collisions_hyrule[position.y - 1][position.x]))
        return;
    if (data->y_pile == 0) {
        data->y_pile = 12;
        data->positions_hyrule[position.y - 1][position.x] = PLAYER;
        data->positions_hyrule[position.y][position.x] = 0;
    } else
        data->y_pile -= 3;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {0, -3});
    if (player.y > 360 && player.y < 2250 - 177)
        sfView_move(data->mapping, (sfVector2f) {0, -3});
    data->player.state = WALK_UP;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
}

void player_walk_right(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.x >= 2250 - 16)
        return;
    if (!can_move(data->collisions_hyrule[position.y][position.x + 1]))
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {3, 0});
    if (data->x_pile == 12) {
        data->x_pile = 0;
        data->positions_hyrule[position.y][position.x + 1] = PLAYER;
        data->positions_hyrule[position.y][position.x] = 0;
    } else
        data->x_pile += 3;
    if (player.x > 317 && player.x < 2250 - 317)
        sfView_move(data->mapping, (sfVector2f) {3, 0});
    data->player.state = WALK_RIGHT;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
}

void player_walk_left(data_t *data)
{
    sfVector2f player = sfRectangleShape_getPosition(data->player.rectangle);
    sfVector2i position = get_position(data, PLAYER, 0);
    if (player.x <= 0)
        return;
    if (!can_move(data->collisions_hyrule[position.y][position.x - 1]) && data->x_pile == 0)
        return;
    sfRectangleShape_move(data->player.rectangle, (sfVector2f) {-3, 0});
    if (data->x_pile == 0) {
        data->x_pile = 12;
        data->positions_hyrule[position.y][position.x - 1] = PLAYER;
        data->positions_hyrule[position.y][position.x] = 0;
    } else
        data->x_pile -= 3;
    if (player.x > 340 && player.x < 2250 - 317)
        sfView_move(data->mapping, (sfVector2f) {-3, 0});
    data->player.state = WALK_LEFT;
    data->player.position = sfRectangleShape_getPosition(data->
    player.rectangle);
}

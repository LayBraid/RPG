/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"
#include "map.h"

void setup_texture_player(data_t *data)
{
    data->player.animation = 0;
    data->player.state = NOTHING;
    data->player.movement = NULL;
    data->player.movement_anim = NULL;
    data->x_pile = 0;
    data->y_pile = 0;
    sfRectangleShape_setSize(data->player.rectangle, (sfVector2f) {16, 28});
    sfRectangleShape_setTexture(data->player.rectangle,
    sfTexture_createFromFile("assets/game/Link.png", NULL), sfTrue);
    sfRectangleShape_setTextureRect(data->player.rectangle,
    get_rect_player(data->player.state, data->player.animation));
    sfRectangleShape_setPosition(data->player.rectangle, (sfVector2f)
    {120, 1500 - 26 - 135 + 750});
    data->positions[149 - 9][8] = PLAYER;
}

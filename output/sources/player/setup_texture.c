/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

void setup_texture_player(data_t *data)
{
    data->player.animation = 0;
    data->player.state = NOTHING;
    sfRectangleShape_setSize(data->player.rectangle, (sfVector2f) {64, 120});
    sfRectangleShape_setTexture(data->player.rectangle,
    sfTexture_createFromFile("assets/game/Link.png", NULL), sfTrue);
    sfRectangleShape_setTextureRect(data->player.rectangle,
    get_rect_player(data->player.state, data->player.animation));
    sfRectangleShape_move(data->player.rectangle, (sfVector2f)
    {1920 / 2 - 32, 1080 / 2 - 60});
}

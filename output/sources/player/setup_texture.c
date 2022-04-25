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
    data->player.movement = NULL;
    data->player.movement_anim = NULL;
    sfRectangleShape_setSize(data->player.rectangle, (sfVector2f) {16, 28});//16, 28
    sfRectangleShape_setTexture(data->player.rectangle,
    sfTexture_createFromFile("assets/game/LinkBorder.png", NULL), sfTrue);
    sfRectangleShape_setTextureRect(data->player.rectangle,
    get_rect_player(data->player.state, data->player.animation));
    sfRectangleShape_setPosition(data->player.rectangle, (sfVector2f)
    {15, 1500 - 26 - 30});
}

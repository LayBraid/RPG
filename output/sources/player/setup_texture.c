/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

void setup_texture_player(data_t *data)
{
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/Link.png", NULL);
    sfRectangleShape_setTexture(data->player.rectangle,
    data->texture_bank->texture, sfTrue);
    data->player.state = NOTHING;
    sfRectangleShape_setTextureRect(data->player.rectangle,
    get_rect_player(data->player.state, data->player.animation));
}

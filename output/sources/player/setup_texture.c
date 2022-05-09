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
    data->player.scale_reverse = 0;
    data->player.state = IDLE_DOWN;
    data->player.movement = NULL;
    data->player.movement_anim = NULL;
    data->player.equipped = 1;
    data->player.damage_display = 0;
    data->player.attack_effect = NULL;
    data->player.damage_display_clock = sfClock_create();
    sfRectangleShape_setSize(data->player.rectangle, (sfVector2f) {16, 28});
    sfRectangleShape_setTexture(data->player.rectangle,
    data->link, sfTrue);
    sfRectangleShape_setTextureRect(data->player.rectangle,
    get_rect_player(data->player.state, data->player.animation));
    data->position_hyrule = (sfVector2f) {174, 2086};
    data->position_tophouse = (sfVector2f) {120, 50};
    data->position_house = (sfVector2f) {120, 50};
    data->position_dj = (sfVector2f) {120, 50};
    sfRectangleShape_setPosition(data->player.rectangle,
    data->position_tophouse);
}

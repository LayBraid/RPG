/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "utils.h"

void texture_effect_player(data_t *data, player_t *player, int id)
{
    attack_effect_t *tmp = player->attack_effect;

    while (tmp->id != id)
        tmp = tmp->next;
    sfRectangleShape_setSize(tmp->rectangle, get_size_effect(tmp->type));
    sfRectangleShape_setTexture(tmp->rectangle, data->link, sfTrue);
    sfRectangleShape_setTextureRect(tmp->rectangle,
    get_rect_effect(tmp->type));
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "utils.h"

void texture_effect(data_t *data, enemy_t *enemy, int id)
{
    attack_effect_t *tmp = enemy->attack_effect;

    while (tmp->id != id)
        tmp = tmp->next;
    sfRectangleShape_setSize(tmp->rectangle, get_size_effect(tmp->type));
    sfRectangleShape_setTexture(tmp->rectangle, data->enemies_texture, sfTrue);
    sfRectangleShape_setTextureRect(tmp->rectangle,
    get_rect_effect(tmp->type));
}

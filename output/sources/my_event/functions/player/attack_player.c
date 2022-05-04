/*
** EPITECH PROJECT, 2022
** output
** File description:
** attack_player
*/

#include "player.h"
#include "my_event.h"
#include "enemies.h"

void attack_player(data_t *data)
{
    // enemy_t *enemy = get_enemy_by_id(data, data->interact.enemy_id);
    // double damage = ; // damage en fonction de l'épée equipé du joueur
    sfClock_restart(data->player.damage_display_clock);
    add_effect_player(data, &data->player, 1, data->player.position);
    // if (enemy->hp >= damage)
    //     enemy->hp -= (int) damage;
    // else {
    //     enemy->hp = 0;
    //     call_event(data, "kill");
    // }
}

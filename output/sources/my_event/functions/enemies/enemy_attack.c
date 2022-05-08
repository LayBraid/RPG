/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "utils.h"
#include "enemies.h"

void enemy_attack(data_t *data)
{
    enemy_t *enemy = get_enemy_by_id(data, data->interact.enemy_id);
    double damage = get_damage(enemy->type);
    data->player.damage_display = 1;
    sfClock_restart(data->player.damage_display_clock);
    add_effect_enemy(data, enemy, data->player.equipped,
    data->player.position);
    if (data->player.current_hp >= damage)
        data->player.current_hp -= (int) damage;
    else {
        data->player.current_hp = 0;
        call_event(data, "loose");
    }
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** attack_player
*/

#include "player.h"
#include "my_event.h"
#include "enemies.h"
#include "utils.h"

void attack_player(data_t *data)
{
    sfClock_restart(data->player.damage_display_clock);
    add_effect_player(data, &data->player, 1, data->player.position);
}

static void kill_enemy(enemy_t *enemy)
{
    if (enemy->hp < 10) {
        enemy->position = (sfVector2f) {-100, -100};
    } else {
        enemy->hp -= 10;
    }
}

void attack_on_enemy(data_t *data)
{
    enemy_t *tmp = get_enemy_by_id(data, data->interact.enemy_id);

    if (data->interact.enemy_distance <= 50 &&
    data->interact.enemy_distance > 0) {
        tmp->display_life = 1;
        switch (data->player.equipped) {
            case 1:
                if (tmp->hp >= 10)
                    tmp->hp -= 10;
                else
                    tmp->dead = 1;
                break;
            case 2:
                if (tmp->hp >= 20)
                    tmp->hp -= 20;
                else
                    tmp->dead = 1;
                break;
            case 3:
                if (tmp->hp >= 30)
                    tmp->hp -= 30;
                else
                    tmp->dead = 1;
                break;
            default: break;
        }
        if (tmp->dead == 1) {
            tmp->position = (sfVector2f) {-1000, -1000};
            sfRectangleShape_setPosition(tmp->rectangle, tmp->position);
        }
    }
}

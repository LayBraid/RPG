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

static void attack_case1(enemy_t *tmp)
{
    if (tmp->hp >= 10)
        tmp->hp -= 10;
    else
        tmp->dead = 1;
}

static void attack_case2(enemy_t *tmp)
{
    if (tmp->hp >= 20)
        tmp->hp -= 20;
    else
        tmp->dead = 1;
}

static void attack_case3(enemy_t *tmp)
{
    if (tmp->hp >= 30)
        tmp->hp -= 30;
    else
        tmp->dead = 1;
}

void attack_on_enemy(data_t *data)
{
    enemy_t *tmp = get_enemy_by_id(data, data->interact.enemy_id);

    if (data->interact.enemy_distance <= 50 &&
    data->interact.enemy_distance > 0) {
        tmp->display_life = 1;
        switch (data->player.equipped) {
            case 1: attack_case1(tmp);
                break;
            case 2: attack_case2(tmp);
                break;
            case 3: attack_case3(tmp);
                break;
            default: break;
        }
        if (tmp->dead == 1) {
            tmp->position = (sfVector2f) {-1000, -1000};
            sfRectangleShape_setPosition(tmp->rectangle, tmp->position);
        }
    }
}

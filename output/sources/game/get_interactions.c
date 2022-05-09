/*
** EPITECH PROJECT, 2022
** output
** File description:
** get_interactions
*/

#include "my_rpg.h"
#include "player.h"
#include "my_event.h"
#include "enemies.h"
#include "inventory.h"
#include "hud.h"


void get_interaction(data_t *data)
{
    if (data->player.equiped == 0) {
        data->player.stamina -= 1;
        call_event(data, "attack_player");
    }
    if (data->player.equiped == 1)
        data->player.current_hp = 10;
    if (data->player.equiped == 2)
        data->player.stamina = 5;
}

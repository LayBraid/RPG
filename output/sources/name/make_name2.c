/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** make_name2
*/

#include "my_rpg.h"
#include "name.h"

void analyse_key3(data_t *data)
{
    if (data->letter->state == 0 && data->letter->count > 0)
        data->letter->state = 1;
    else if (data->letter->state == 1) {
        enter_name(data);
        data->settings_state = "GAME";
    }
}

/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialogue
*/

#include "my_rpg.h"
#include "my_event.h"
#include "utils.h"
#include "dialogs.h"

void event_dialog1(data_t *data)
{
    which_dialog(data, data->interact.npc_id);
}

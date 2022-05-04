/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog1
*/

#include "dialogs.h"
#include "my_rpg.h"

void dialog1(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data,
        "Ceci est un dialogue\n\npour montrer\n\nle fonctionnement.",
        data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
        "Ola ! Je suis Arthur !\n\nJ'ai fait les menus du jeu\n\nLa suite...",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 6;
}

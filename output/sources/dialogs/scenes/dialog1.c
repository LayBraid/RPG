/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog1
*/

#include "my_rpg.h"
#include "dialogs.h"

void dialog1(data_t *data, int npc_id)
{
    dialog_init(data);
    printf("dialog 1\n");
    dialog(data,
        "Ceci est un dialogue\n\npour montrer\n\nle fonctionnement.",
        data->id_text_player, 0, npc_id);
    printf("inter 1\n");
    inter_dialog(data);
    printf("destroy 1\n");
    destroy_dialog_frame(data);
    printf("dialog 2\n");
    dialog(data,
        "Ola ! Je suis Arthur !\n\nJ'ai fait les menus du jeu\n\nLa suite...",
        data->id_text_player, 1, npc_id);
    printf("inter 2\n");
    inter_dialog(data);
    printf("destroy 2\n");
    destroy_dialog_frame(data);
    printf("destroy 3\n");
    destroy_dialogs(data);
    data->video.ui = 2;
}

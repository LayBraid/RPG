/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialog_example
*/

#include "my_rpg.h"
#include "dialogs.h"

void dialog_example(data_t *data)
{
    dialog_init(data);
    dialog(data,
        "Ceci est un dialogue\n\npour montrer\n\nle fonctionnement.",
        data->id_text_player, 0, 1);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
        "Ola ! Je suis Arthur !\n\nJ'ai fait les menus du jeu\n\nLa suite...",
        data->id_text_player, 1, 1);
    if (dialog_choice(data) == 1) {
        destroy_dialog_frame(data);
        dialog(data, "Oui !", data->id_text_player, 0, 1);
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, 1);
    }
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

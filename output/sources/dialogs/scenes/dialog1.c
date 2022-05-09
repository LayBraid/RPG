/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog1
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

void dialog7(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, "Pssst.. Pssssst..\n\n Oui bon maintenant on se"
    "connait toi et moi\n\n plus besoin de me cacher effectivement.",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Il est bete ou quoi lui",
    data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog7b(data, npc_id);
    data->video.ui = 2;
}

void dialog8(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, "Je t'avais pourtant dit de ne pas te meler de choses\n\n qui ne te regardent pas ! C'est moi qui ai vole tous les poulets.",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Le retour de Ganon dans notre royaume ne pouvait pas avoir un\n\n"
    "meilleur timing, ca m'a permis de trouver le coupable parfait.",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Si j'ai vole les poulets, c'est dans un but precis.\n\n"
    "J'ai sorti une nouvelle recette au boeuf il y a 2 mois,\n\n"
    "et personne n'a daigne ne serait-ce que gouter ma nouvelle creation !",
    data->id_text_player, 1, npc_id);
    dialog8b(data, npc_id);
    data->video.ui = 2;
}

void dialog9(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data,"Salut ma couillasse c'est Jean-Marie Bigard !\n\n"
    "Non je rigole bien joue Link, grace a toi on va pouvoir\n\n"
    "de nouveau deguster du poulet ! Merci infiniment !",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void which_dialog2(data_t *data, int npc_id)
{
    switch (npc_id) {
        case (7): data->video.ui = 25;
            break;
        case (8): data->video.ui = 24;
            break;
        case (9): data->video.ui = 23;
            break;
        default: break;
    }
}

void which_dialog(data_t *data, int npc_id)
{
    switch (npc_id) {
        case (1): data->video.ui = 31;
            break;
        case (2): data->video.ui = 30;
            break;
        case (3): data->video.ui = 29;
            break;
        case (4): data->video.ui = 28;
            break;
        case (5): data->video.ui = 27;
            break;
        case (6): data->video.ui = 26;
            break;
        default: which_dialog2(data, npc_id);
            break;
    }
}

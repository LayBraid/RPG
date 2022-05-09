/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog2
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

void dialog7b(data_t *data, int npc_id)
{
    dialog(data,
    "J'ai du nouveau en stock ! Et ca tue ! Alors, tu veux jeter un oeil ?",
    data->id_text_player, 1, npc_id);
    if (dialog_choice(data) == 1) {
        destroy_dialog_frame(data);
        dialog(data, "Oui !", data->id_text_player, 0, npc_id);
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, npc_id);
    }
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

void dialog4b(data_t *data, int npc_id)
{
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "*interrese*", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "Alors, ca te dit d'en profiter et de m'acheter mes superbes produits ?",
    data->id_text_player, 1, npc_id);
    if (dialog_choice(data) == 1) {
        destroy_dialog_frame(data);
        dialog(data, "Oui !", data->id_text_player, 0, npc_id);
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, npc_id);
    }
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

void dialog3b(data_t *data, int npc_id)
{
    inter_dialog(data);
    if (dialog_choice(data) == 1) {
        destroy_dialog_frame(data);
        dialog(data, "Oui !", data->id_text_player, 0, npc_id);
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, npc_id);
    }
    destroy_dialog_frame(data);
    dialog(data, "Super ! Je savais que je pouvais compter sur toi Link !\n\n"
    "Ganon s'est enfui dans la foret au Nord du village apres m'avoir vole"
    "\n\nmes gentils poulets. Tu devrais commencer ton expedition la-bas.",
    data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

void dialog2b(data_t *data, int npc_id)
{
    dialog(data,
    "Nico ? Non c'est pas ca. Yanis ? Non plus. Ah je me souviens ! Adidas !",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "........", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,   "L'heure est grave Adidas ! Ganon est revenu sur l'ile et a vole les\n\n"
    "poulets du fermier du village ! Le KFC est donc a l'arret et tous\n\n"
    "les habitants sont en plein desespoir !",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "panique", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog2c(data, npc_id);
}

void dialog1b(data_t *data, int npc_id)
{
    dialog(data, "*????????*", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,"Bon je t'ai prepare des donuts sucres... au sucre,"
    "\n\ndonc descend me gouter ca.", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

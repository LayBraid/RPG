/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog3
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

void dialog8b(data_t *data, int npc_id)
{
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s", "Alors il me fallait agir !\n\n",
    "Cette nouvelle creation doit devenir le nouveau produit phare de KFC !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "Mais maintenant que tu sais tout, je ne peux me permettre de te\n\n",
    "laisser devoiler tout ce que tu viens d'appendre a tout le monde !\n\n",
    "Je vais donc devoir me debarrasser de toi !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

void dialog2c(data_t *data, int npc_id)
{
    dialog(data, my_fprintf("%s%s",
    "C'est pourquoi tu dois partir recuperer les poulets que l'horrible\n\n",
    "Ganon nous a subtilise. Je compte sur toi Adidas !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "EN AVANT !", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

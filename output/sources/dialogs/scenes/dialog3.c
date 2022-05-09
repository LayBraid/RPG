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
    dialog(data, "Alors il me fallait agir !\n\nCette nouvelle creation doit devenir le nouveau produit phare de KFC !",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Mais maintenant que tu sais tout, je ne peux me permettre de te\n\nlaisser devoiler tout ce que tu viens d'appendre a tout le monde !\n\nJe vais donc devoir me debarrasser de toi !",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

void dialog2c(data_t *data, int npc_id)
{
    dialog(data, "C'est pourquoi tu dois partir recuperer les poulets que l'horrible\n\nGanon nous a subtilise. Je compte sur toi Adidas !",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "EN AVANT !", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
}

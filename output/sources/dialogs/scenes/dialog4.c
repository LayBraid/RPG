/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog4
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

void dialog1(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data,
        "Link...\n\nLiiink... Liiiiiink...\n\nLIIIINNNNKK !!!",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "...", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Tu dors ?", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog1b(data, npc_id);
    data->video.ui = 2;
}

void dialog2(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data,
        "Bon garcon !\n\nAlors ? Comment etaient-ils ?\n\n"
        "Je te les ai prepare avec amour.",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "...", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "Haaa ! Je savais qu'ils te plairaient ! Je suis content !"
    "\n\nBon, comment tu t'appelles deja ?",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog2b(data, npc_id);
    data->video.ui = 2;
}

void dialog3(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data,
    "Ah Link ! Te voila ! C'est horrible !\n\n"
    "Ganon est venu et a vole tous les poulets !",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, ".....", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Tu dois nous aider Link !\n\nAcceptes-tu de recuperer les poulets pour moi ?",
    data->id_text_player, 1, npc_id);
    dialog3b(data, npc_id);
    data->video.ui = 2;
}

void dialog4(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, "Pssst.. Pssssst.. Ouais c'est a toi que je parle",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "!!!", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Moi grossier ? Mais non voyons ! C'est seulement que j'ai decide que\n\n"
                 "vous etes l'heureux elu. En effet, vous allez pouvoir profiter de\n\n"
                 "promotions extraordinaires.", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "Et si quelqu'un nous entend, il en deviendra completement jaloux.\n\n"
    "Voila pourquoi je parle doucement.", data->id_text_player, 1, npc_id);
    dialog4b(data, npc_id);
    data->video.ui = 2;
}

void dialog5(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, "Bonjour je suis Kamel, le CEO de KFC !\n\nJ'ai entendu dire que tu souhaitais ramener\n\nles poulets voles par Ganon au village !",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Mais je dois te prevenir, tu t'aventures sur une route tres dangereuse.\n\nEt ca ne vaut pas de mettre en peril ta paisible vie.",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "*Ca n'atteint pas ma motivation*",
    data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}

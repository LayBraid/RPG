/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog5
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

void dialog6(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, "Tu as alors reussi a parvenir jusqu'ici ?\n\nTu te meles de choses qui te depassent et ne te regardent pas !\n\nRebrousse chemin, je t'aurai prevenu !",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "*intrigue par le ton employe, mais je n'abandonnerai pas*",
    data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}

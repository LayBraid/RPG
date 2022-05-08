/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog1
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

// ! destroy dialog frame bug (segfault)

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
    dialog(data, "*????????*", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    my_fprintf("%s%s", "Bon je t'ai prepare des donuts sucres... au sucre,",
    "\n\ndonc descend me gouter ca."), data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog2(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s",
        "Bon garcon !\n\nAlors ? Comment etaient-ils ?\n\n",
        "Je te les ai prepare avec amour."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "...", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Haaa ! Je savais qu'ils te plairaient ! Je suis content !",
    "\n\nBon, comment tu t'appelles deja ?"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "Nico ? Non c'est pas ca. Yanis ? Non plus. Ah je me souviens ! Adidas !",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "........", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "L'heure est grave Adidas ! Ganon est revenu sur l'ile et a vole les\n\n",
    "poulets du fermier du village ! Le KFC est donc a l'arret et tous\n\n",
    "les habitants sont en plein desespoir !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "panique", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
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
    data->video.ui = 2;
}

void dialog3(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s",
    "Ah Link ! Te voila ! C'est horrible !\n\n",
    "Ganon est venu et a vole tous les poulets !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, ".....", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s", "Tu dois nous aider Link !\n\n",
    "Acceptes-tu de recuperer les poulets pour moi ?"),
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    if (dialog_choice(data) == 1) {
        destroy_dialog_frame(data);
        dialog(data, "Oui !", data->id_text_player, 0, npc_id);
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, npc_id);
        // !sortir du dialog
    }
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "Super ! Je savais que je pouvais compter sur toi Link !\n\n",
    "Ganon s'est enfui dans la foret au Nord du village apres m'avoir vole",
    "\n\nmes gentils poulets. Tu devrais commencer ton expedition la-bas."),
    data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
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
    dialog(data, my_fprintf("%s%s%s",
    "Moi grossier ? Mais non voyons ! C'est seulement que j'ai decide que\n\n",
    "vous etes l'heureux elu. En effet, vous allez pouvoir profiter de\n\n",
    "promotions extraordinaires."), data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Et si quelqu'un nous entend, il en deviendra completement jaloux.\n\n",
    "Voila pourquoi je parle doucement."), data->id_text_player, 1, npc_id);
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
        // ! ouvrir le shop
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, npc_id);
        // ! sortir du dialog
    }
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog5(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Bonjour je suis Kamel, le CEO de KFC !\n\n",
    "J'ai entendu dire que tu souhaitais ramener\n\n",
    "les poulets voles par Ganon au village !"),
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Mais je dois te prevenir, tu t'aventures sur une route tres dangereuse.",
    "\n\nEt ca ne vaut pas de mettre en peril ta paisible vie."),
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

void dialog6(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Tu as alors reussi a parvenir jusqu'ici ?\n\n",
    "Tu te meles de choses qui te depassent et ne te regardent pas !\n\n",
    "Rebrousse chemin, je t'aurai prevenu !"),
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

void dialog7(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Pssst.. Pssssst..\n\n",
    "Oui bon maintenant on se connait toi et moi\n\n",
    "plus besoin de me cacher effectivement."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "Il est bete ou quoi lui", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "J'ai du nouveau en stock ! Et ca tue ! Alors, tu veux jeter un oeil ?",
    data->id_text_player, 1, npc_id);
    if (dialog_choice(data) == 1) {
        destroy_dialog_frame(data);
        dialog(data, "Oui !", data->id_text_player, 0, npc_id);
        // ! ouvrir le shop
    } else {
        destroy_dialog_frame(data);
        dialog(data, "Non !", data->id_text_player, 0, npc_id);
        // ! sortir du dialog
    }
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog8(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s",
    "Je t'avais pourtant dit de ne pas te meler de choses\n\n",
    "qui ne te regardent pas ! C'est moi qui ai vole tous les poulets."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Le retour de Ganon dans notre royaume ne pouvait pas avoir un\n\n",
    "meilleur timing, ca m'a permis de trouver le coupable parfait."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "Si j'ai vole les poulets, c'est dans un but precis.\n\n",
    "J'ai sorti une nouvelle recette au boeuf il y a 2 mois,\n\n",
    "et personne n'a daigne ne serait-ce que gouter ma nouvelle creation !"),
        data->id_text_player, 1, npc_id);
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
    data->video.ui = 2;
}

void dialog9(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Salut ma couillasse c'est Jean-Marie Bigard !\n\n",
    "Non je rigole bien joue Link, grace a toi on va pouvoir\n\n",
    "de nouveau deguster du poulet ! Merci infiniment !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    destroy_dialogs(data);
    data->video.ui = 2;
}
// TODO : donner aux NPC les id correspondant à leurs dialogues
void which_dialog(data_t *data, int npc_id)
{
    switch (npc_id) {
        case (1): data->video.ui = 31; // dialog1(data, npc_id); NPC 1
            break;
        case (2): data->video.ui = 30; // dialog2(data, npc_id); NPC 2
            break;
        case (3): data->video.ui = 29; // dialog3(data, npc_id); NPC 3
            break;
        case (4): data->video.ui = 28; // dialog4(data, npc_id); NPC 4
            break;
        case (5): data->video.ui = 27; // dialog5(data, npc_id); NPC 5
            break;
        case (6): data->video.ui = 26; // dialog6(data, npc_id); NPC 6
            break;
        case (7): data->video.ui = 25; // dialog7(data, npc_id); NPC 7
            break;
        case (8): data->video.ui = 24; // dialog8(data, npc_id); NPC 8
            break;
        case (9): data->video.ui = 23; // dialog9(data, npc_id); NPC 9
            break;
        default:
            break;
    }
}

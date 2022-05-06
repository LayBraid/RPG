/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** dialog1
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my_fprintf.h"

// void dialog1(data_t *data, int npc_id)
// {
//     dialog_init(data);
//     printf("dialog 1\n");
//     dialog(data,
//         "Ceci est un dialogue\n\npour montrer\n\nle fonctionnement.",
//         data->id_text_player, 0, npc_id);
//     printf("inter 1\n");
//     inter_dialog(data);
//     printf("destroy 1\n");
//     destroy_dialog_frame(data);
//     printf("dialog 2\n");
//     dialog(data,
//         "Ola ! Je suis Arthur !\n\nJ'ai fait les menus du jeu\n\nLa suite...",
//         data->id_text_player, 1, npc_id);
//     printf("inter 2\n");
//     inter_dialog(data);
//     printf("destroy 2\n");
//     destroy_dialog_frame(data);
//     printf("destroy 3\n");
//     destroy_dialogs(data);
//     data->video.ui = 2;
// }

// ! destroy dialog frame bug (segfault)

void dialog1(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data,
        "Link...\n\nLiiink... Liiiiiink..\n\nLIIIINNNNKK !!!",
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
    my_fprintf("%s%s", "Bon je t’ai prepare des donuts sucres... au sucre,",
    "\n\ndonc descend me gouter ça."), data->id_text_player, 1, npc_id);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog2(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s",
        "Bon garcon !\n\nAlors ? Comment étaient-ils ?\n\n",
        "Je te les ai préparé avec amour."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "...", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Haaa ! Je savais qu’ils te plairaient ! Je suis content !",
    "\n\nBon, comment tu t’appelles déjà ?"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "Nico ? Non c’est pas ça. Yanis ? Non plus. Ah je me souviens ! Adidas !",
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "........", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "L’heure est grave Adidas ! Ganon est revenu sur l’île et à volé les\n\n",
    "poulets du fermier du village ! Le KFC est donc à l’arrêt et tous\n\n",
    "les habitants sont en plein désespoir !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "panique", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "C’est pourquoi tu dois partir récupérer les poulets que l’horrible\n\n",
    "Ganon nous a subtilisé. Je compte sur toi Adidas !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "EN AVANT !", data->id_text_player, 0, npc_id);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog3(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s",
    "Ah Link ! Te voilà ! C’est horrible !\n\n",
    "Ganon est venu et a volé tous les poulets !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, ".....", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s", "Tu dois nous aider Link !\n\n",
    "Acceptes-tu de récupérer les poulets pour moi ?"),
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
    "Ganon s’est enfui dans la forêt au Nord du village après m’avoir volé",
    "\n\nmes gentils poulets. Tu devrais commencer ton expédition là-bas."),
    data->id_text_player, 0, npc_id);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog4(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, "Pssst.. Pssssst.. Ouais c’est à toi que je parle",
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "!!!", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "Moi grossier ? Mais non voyons ! C’est seulement que j’ai decide que\n\n",
    "vous etes l’heureux élu. En effet, vous allez pouvoir profiter de\n\n",
    "promotions extraordinaires."), data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Et si quelqu’un nous entend, il en deviendra complètement jaloux.\n\n",
    "Voilà pourquoi je parle doucement."), data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "*interrese*", data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "Alors, ça te dit d’en profiter et de m’acheter mes superbes produits ?",
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
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog5(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Bonjour je suis Kamel, le CEO de KFC !\n\n",
    "J’ai entendu dire que tu souhaitais ramener\n\n",
    "les poulets volés par Ganon au village !"),
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Mais je dois te prévenir, tu t’aventures sur une route très dangereuse.",
    "\n\nEt ça ne vaut pas de mettre en péril ta paisible vie."),
    data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "*Ca n’atteint pas ma motivation*",
    data->id_text_player, 0, npc_id);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog6(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Tu as alors réussi à parvenir jusqu’ici ?\n\n",
    "Tu te mêles de choses qui te dépassent et ne te regardent pas !\n\n",
    "Rebrousse chemin, je t’aurai prévenu !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, "*intrigué par le ton employé, mais je n’abandonnerai pas*",
    data->id_text_player, 0, npc_id);
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
    dialog(data, "Il est bête ou quoi lui", data->id_text_player, 0, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data,
    "J’ai du nouveau en stock ! Et ça tue ! Alors, tu veux jeter un oeil ?",
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
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog8(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s",
    "Je t’avais pourtant dit de ne pas te mêler de choses\n\n",
    "qui ne te regardent pas ! C’est moi qui ai volé tous les poulets."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s",
    "Le retour de Ganon dans notre royaume ne pouvait pas avoir un\n\n",
    "meilleur timing, ça m’a permit de trouver le coupable parfait."),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "Si j’ai volé les poulets, c’est dans un but précis.\n\n",
    "J’ai sorti une nouvelle recette au boeuf il y a 2 mois,\n\n",
    "et personne n’a daigné ne serait-ce que goûter ma nouvelle création !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s", "Alors il me fallait agir !\n\n",
    "Cette nouvelle création doit devenir le nouveau produit phare de KFC !"),
        data->id_text_player, 1, npc_id);
    inter_dialog(data);
    destroy_dialog_frame(data);
    dialog(data, my_fprintf("%s%s%s",
    "Mais maintenant que tu sais tout, je ne peux me permettre de te\n\n",
    "laisser dévoiler tout ce que tu viens d’appendre à tout le monde !\n\n",
    "Je vais donc devoir me débarrasser de toi !"),
        data->id_text_player, 1, npc_id);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void dialog9(data_t *data, int npc_id)
{
    dialog_init(data);
    dialog(data, my_fprintf("%s%s%s",
    "Salut ma couillasse c’est Jean-Marie Bigard !\n\n",
    "Non je rigole bien joué Link, grâce à toi on va pouvoir\n\n",
    "de nouveau déguster du poulet ! Merci infiniment !"),
        data->id_text_player, 1, npc_id);
    destroy_dialogs(data);
    data->video.ui = 2;
}

void which_dialog(data_t *data, int npc_id)
{
    switch (npc_id) {
        case (1): dialog1(data, npc_id);
            break;
        case (2): dialog2(data, npc_id);
            break;
        case (3): dialog3(data, npc_id);
            break;
        case (4): dialog4(data, npc_id);
            break;
        case (5): dialog5(data, npc_id);
            break;
        case (6): dialog6(data, npc_id);
            break;
        case (7): dialog7(data, npc_id);
            break;
        case (8): dialog8(data, npc_id);
            break;
        case (9): dialog9(data, npc_id);
            break;
        default:
            break;
    }
}

void get_corresponding_dialog(data_t *data)
{
    which_dialog(data, data->interact.npc_id);
}

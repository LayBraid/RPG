/*
** EPITECH PROJECT, 2022
** output
** File description:
** init_quest
*/

#include "utils.h"
#include "menus.h"
#include "intro.h"
#include "new_game.h"
#include "skill_tree.h"
#include "load_game.h"
#include "settings.h"
#include "my_event.h"
#include "inventory.h"
#include "name.h"
#include "keybind.h"
#include "pause.h"
#include "howtoplay.h"
#include "credits.h"
#include "hud.h"
#include "dialogs.h"
#include "quests.h"

void create_quest(data_t *data, quest_t *quest, sfVector2f pos)
{
    sfFont *font = sfFont_createFromFile("./assets/font.ttf");
    data->texts = create_text(data->texts, quest->description, font);
    data->texts = set_text_position(data->texts, pos);
}

void init_quest(data_t *data)
{
    quest_t *tmp = data->quest;
    int i = 0;
    sfVector2f pos = (sfVector2f){0,300};

    while (i < data->quest_nb) {
        if (tmp->status == IN_PROGRESS) {
            create_quest(data, tmp, pos);
            pos.y += 30;
        }
        tmp = tmp->next;
        i++;
    }
}

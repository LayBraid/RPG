/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "quests.h"
#include "my.h"

static void update_quest(data_t *data, quest_t *quest)
{
    event_list_t *tmp = quest->requirements;

    while (tmp->next != NULL) {
        if (tmp->calls > 0)
            return;
        tmp = tmp->next;
    }
    if (tmp->calls > 0)
        return;
    quest->status = CLAIM;
    finish_quest(data, quest);
}

static void call_to_requirements(data_t *data, quest_t *quest, char *event)
{
    event_list_t *tmp = quest->requirements;

    while (tmp->next != NULL) {
        if (my_strcmp(tmp->name, event) == 0 && tmp->calls > 0) {
            tmp->calls--;
            update_quest(data, quest);
        }
        tmp = tmp->next;
    }
    if (my_strcmp(tmp->name, event) == 0 && tmp->calls > 0) {
        tmp->calls--;
        update_quest(data, quest);
    }
}

void call_to_quests(data_t *data, char *event)
{
    quest_t *tmp = data->quest;

    while (tmp->id != 0) {
        call_to_requirements(data, tmp, event);
        tmp = tmp->next;
    }
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "quests.h"
#include "my_event.h"

void finish_quest(data_t *data, quest_t *quest)
{
    event_list_t *rewards = quest->rewards;

    while (rewards->next != NULL) {
        while ((rewards->calls) > 0){
            call_event(data, rewards->name);
            rewards->calls--;
        }
        rewards = rewards->next;
    }
    while ((rewards->calls) > 0){
        call_event(data, rewards->name);
        rewards->calls--;
    }
    quest->status = FINISH;
}

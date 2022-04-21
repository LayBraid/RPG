/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "my.h"
#include "quests.h"

void call_event(data_t *data, char *event)
{
    event_t *tmp = data->my_event;

    while (tmp->id < tmp->next->id) {
        if (my_strcmp(event, tmp->name) == 0) {
            tmp->function(data);
            tmp->calling++;
        }
        tmp = tmp->next;
    }
    if (my_strcmp(event, tmp->name) == 0) {
        tmp->function(data);
        tmp->calling++;
    }
    call_to_quests(data, event);
}

/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "quests.h"

void add_quest(data_t *data, quest_t *quest)
{
    if (data->quest == NULL)
        first_quest(&data->quest, quest);
    else
        any_quest(&data->quest, quest);
}

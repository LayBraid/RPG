/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#ifndef RPG_QUESTS_H
    #define RPG_QUESTS_H

    #include "structures.h"

enum STATUS {
    NO_SEE,
    IN_PROGRESS,
    CLAIM,
    FINISH,
};

void add_quest(data_t *data, quest_t *quest);

void any_quest(quest_t **node, quest_t *new);

void first_quest(quest_t **node, quest_t *new);

void call_to_quests(data_t *data, char *event);

void finish_quest(data_t *data, quest_t *quest);

#endif

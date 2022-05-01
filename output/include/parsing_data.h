/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#ifndef RPG_PARSING_DATA_H
    #define RPG_PARSING_DATA_H

    #include "structures.h"

void parsing_data(data_t *data);

void parsing_quest(data_t *data, char *buffer);

void parsing_profile(data_t *data, char *buffer);

void extract_requirements(quest_t *quest, char *buffer);

void extract_rewards(quest_t *quest, char *buffer);

void parsing_npc(data_t *data, char *buffer);

void parse_enemy(data_t *data, char *buffer);

#endif

/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"
#include "my.h"
#include "utils.h"

static void convert_data(data_t *data, char *buffer, int *step)
{
    if (my_strcmp(buffer, "['Quests']\n") == 0) {
        (*step) = 0;
        return;
    }
    if (my_strcmp(buffer, "['Profiles']\n") == 0) {
        (*step) = 1;
        return;
    }
    if (my_strcmp(buffer, "['NPC']\n") == 0) {
        (*step) = 2;
        return;
    }
    switch ((*step)) {
        case 0: parsing_quest(data, buffer);
            break;
        case 1: parsing_profile(data, buffer);
            break;
        case 2: parsing_npc(data, buffer);
            break;
        default:
            break;
    }
}

void parsing_data(data_t *data)
{
    char *buffer = get_in_buffer("data/my_data");
    int step = -1;
    int info[2] = {0};

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n' || buffer[i] == '\0') {
            info[1] = i;
            convert_data(data,
            extract_between_limits(buffer, info[0], info[1]), &step);
            info[0] = i + 1;
            continue;
        }
    }
}

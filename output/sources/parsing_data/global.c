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
    if (my_strcmp(buffer, "['Quests']") == 0) {
        (*step) = 0;
        return;
    }
    if (my_strcmp(buffer, "['Profiles']") == 0) {
        (*step) = 1;
        return;
    }
    switch ((*step)) {
        case 0:
            parsing_quest(data, buffer);
            break;
        case 1:
            parsing_profile(data, buffer);
            break;
        default:
            break;
    }
}

void parsing_data(data_t *data)
{
    char *buffer = get_in_buffer("data/my_data");
    int step = -1;
    char *tmp = "";

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != '\n')
            tmp = my_strcat_c(tmp, buffer[i]);
        if (buffer[i] == '\n') {
            convert_data(data, tmp, &step);
            tmp = "";
            continue;
        }
    }
}
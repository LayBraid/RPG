/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"
#include "utils.h"
#include "my.h"

static int count_rewards(const char *buffer)
{
    int count = 1;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == ',' && buffer[i - 1] == ']' && buffer[i + 1] == '[')
            count++;
    return count;
}

static void add_reward(quest_t *quest, char *name, int calls)
{
    event_list_t *tmp = quest->rewards;
    event_list_t *new = malloc(sizeof(event_list_t));
    new->name = name;
    new->calls = calls;
    new->next = NULL;

    if (quest->rewards == NULL) {
        quest->rewards = new;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}

void extract_rewards(quest_t *quest, char *buffer)
{
    int emplacement = 0;

    for (int i = 0; i < count_rewards(buffer); i++) {
        add_reward(quest, extract_between_limits(buffer,
        get_it_char(buffer, 39, emplacement),
        get_it_char(buffer, 39, emplacement + 1)),
        my_atoi(extract_between_limits(buffer,
        get_it_char(buffer, ',', emplacement),
        get_it_char(buffer, ']',
        (emplacement > 0 ? emplacement - 1 : emplacement)))));
        emplacement += 2;
    }
}

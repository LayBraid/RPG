/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"
#include "utils.h"
#include "my.h"
#include "quests.h"

void parsing_quest(data_t *data, char *buffer)
{
    quest_t *new = malloc(sizeof(quest_t));
    new->name = extract_between_limits(buffer, get_it_char(buffer, 39, 0) + 1,
    get_it_char(buffer, 39, 1) - 1);
    new->display_name = extract_between_limits(buffer,
    get_it_char(buffer, 39, 2) + 1, get_it_char(buffer, 39, 3) - 1);
    new->description = extract_between_limits(buffer,
    get_it_char(buffer, 39, 4) + 1, get_it_char(buffer, 39, 5) - 1);
    new->status = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 2) + 1, get_it_char(buffer, ',', 3) - 1));
    new->requirements = NULL;
    new->rewards = NULL;

    extract_requirements(new, extract_between_limits(buffer,
    get_it_char_two(buffer, '[', 0) + 1, get_it_char_two(buffer, ']', 0)));
    extract_rewards(new, extract_between_limits(buffer,
    get_it_char_two(buffer, '[', 1) + 1, get_it_char_two(buffer, ']', 1)));
    add_quest(data, new);
}

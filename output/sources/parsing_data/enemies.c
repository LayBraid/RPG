/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"
#include "utils.h"
#include "my.h"
#include "enemies.h"

static void parsing_enemy(data_t *data, enemy_t *enemy, char *buffer)
{
    sfVector2f pos;
    enemy->map = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 4) + 1,get_it_char(buffer, ',', 5) - 1));
    enemy->hp = enemy->max_hp;
    pos.x = (float) my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, '[', 1) + 1,get_it_char(buffer, ',', 6) - 1));
    pos.y = (float) my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 6) + 1,get_it_char(buffer, ']', 0) - 1));
    enemy->dead = 0;
    enemy->position = pos;
    if (data->enemies == NULL)
        first_enemy(&data->enemies, enemy, data->enemies_texture);
    else
        any_enemy(&data->enemies, enemy, data->enemies_texture);
}

void parse_enemy(data_t *data, char *buffer)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    enemy->name = extract_between_limits(buffer,
    get_it_char(buffer, 39, 0) + 1, get_it_char(buffer, 39, 1) - 1);
    enemy->type = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 0) + 1,get_it_char(buffer, ',', 1) - 1));
    enemy->depth = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 1) + 1,get_it_char(buffer, ',', 2) - 1));
    enemy->max_hp = (float) my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 2) + 1,get_it_char(buffer, ',', 3) - 1));
    enemy->range = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 3) + 1,get_it_char(buffer, ',', 4) - 1));
    parsing_enemy(data, enemy, buffer);
}

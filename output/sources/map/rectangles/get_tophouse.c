/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"
#include "my.h"
#include "utils.h"

static void update_texture(data_t *data, char *buffer, int info[5])
{
    float map[4] = {(float) info[3], (float) info[4],
    (float) my_atoi(extract_between_limits(buffer,get_it_char(buffer, '[', 0)
    + 1,get_it_char(buffer, ',', 0) - 1)), (float) my_atoi(
    extract_between_limits(buffer,get_it_char(buffer, ',', 0) + 1,
    get_it_char(buffer, ']', 0) - 1))};
    add_map_tophouse(data, map);
}

void get_map_tophouse(data_t *data)
{
    char *buffer = get_in_buffer("data/tophouse");
    int info[5] = {0};

    setup_collisions_tophouse(data);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            info[4]++;
            info[3] = 0;
        }
        if (buffer[i] == '[')
            info[0] = i;
        if (buffer[i] == ']') {
            info[1] = i;
            update_texture(data,
            extract_between_limits(buffer, info[0], info[1]), info);
            info[3]++;
        }
    }
}

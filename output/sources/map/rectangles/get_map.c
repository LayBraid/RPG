/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"
#include "my.h"
#include "utils.h"

static void update_texture(data_t *data, char *buffer,
node_rectangle *rectangle)
{
    node_texture_map *texture = data->texture;
    rectangle->type = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, '[', 0) + 1,get_it_char(buffer, ',', 0) - 1));
    rectangle->depth = my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 0) + 1,get_it_char(buffer, ']', 0) - 1));

    for (int i = 0; i < rectangle->type; i++)
        texture = texture->next;
    texture->function(data, rectangle);
}

void get_map(data_t *data)
{
    node_rectangle *rectangle = data->map;
    char *buffer = get_in_buffer("data/map");
    int info[3] = {0};

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '[')
            info[0] = i;
        if (buffer[i] == ']') {
            info[1] = i;
            update_texture(data,
            extract_between_limits(buffer, info[0], info[1]), rectangle);
            rectangle = rectangle->next;
        }
    }
}

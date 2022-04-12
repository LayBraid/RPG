/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** read_map
*/

#include "../../include/my_rpg.h"

int make_tile(data_t *data, char *map, int i, sfVector2f pos)
{
    unsigned char depth = -1;
    char comma = 0;
    unsigned int type = -1;

    while (map[i] != ']') {
        if (depth == -1)
            depth = my_getnbr(&map[i]);
        else if (comma == 1)
            type = my_getnbr(&map[i]);
        else if (map[i] != ',')
            comma++;
        i++;
    }
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, depth);
    data->tiles->type = type;
    return (i);
}

void construct_map(data_t *data, char *map)
{
    sfVector2f pos = {0, 0};
    for (int i = 0; map[i]; i++) {
        if (map[i] == '[') {
            i = make_tile(data, map, i, pos);
            pos.x++;
        } else if (map[i] == '\n' && map[i + 1] == '\n')
            break;
        else if (map[i] == '\n') {
            pos.x = 0;
            pos.y++;
        }
    }
}

char *my_strdup_to_c(char *str, char c)
{
    int size;
    char *new = NULL;

    while (str[size] != c && str[size])
        size++;
    new = malloc((size + 1) * sizeof(char));
    for (int i = 0; str[i] != c && str[i]; i++)
        new[i] = str[i];
    new[size] = '\0';
    return (new);
}

int make_npc(data_t *data, char *map, int i)
{
    unsigned char depth = -1;
    unsigned int type = -1;
    sfVector2f pos;

    pos.x = my_getnbr(&map[i]);
    while (map[i] != ',')
        i++;
    i++;
    pos.y = my_getnbr(&map[i]);
    while (map[i] != ',')
        i++;
    i++;
    type = my_getnbr(&map[i]);
    while (map[i] != ',')
        i++;
    i++;
    depth = my_getnbr(&map[i]);
    data->npcs = create_npc(data->npcs, my_strdup_to_c(&map[i], ']'));
    data->npcs = set_npc_depth(data->npcs, depth);
    data->npcs = set_npc_type(data->npcs, type);
    return (i);
}

void get_npcs(data_t *data, char *map)
{
    int i = 0;

    for (; map[i] != '\n' && map[i + 1] != '\n' && map[i + 1]; i++);
    i++;
    for (; map[i]; i++) {
        if (map[i] == '[') {
            i = make_npc(data, map, i);
        }
    }
}

char *make_map(char *filepath)
{
    char *map = NULL;
    struct stat st;
    int fd = -1;

    stat(filepath, &st);
    map = malloc(sizeof(char) * (st.st_size + 1));
    if (map == NULL)
        return (NULL);
    map[st.st_size] = '\0';
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (NULL);
    read(fd, map, st.st_size);
    close(fd);
    return (map);
}

void create_map_from_file(data_t *data, char *filepath)
{
    char *map = make_map(filepath);

    if (map == NULL)
        return;
    construct_map(data, map);
    free(map);
}

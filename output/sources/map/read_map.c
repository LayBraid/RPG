/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** read_map
*/

#include "../../include/my_rpg.h"
#include "my.h"

int make_tile(data_t *data, char *map, int i, sfVector2f pos)
{
    unsigned char depth = 11;
    char comma = 0;
    unsigned int type = 11;

    while (map[i] != ']') {
        if (depth == 11)
            depth = my_getnbr(&map[i + 1]);
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

sfVector2f make_npc2(data_t *data, char *map, int *i)
{
    sfVector2f pos;

    pos.x = my_getnbr(&map[*i]);
    while (map[*i] != ',')
        *i += 1;
    i += 1;
    pos.y = my_getnbr(&map[*i]);
    while (map[*i] != ',')
        *i += 1;
    i += 1;
    return (pos);
}

int make_npc(data_t *data, char *map, int i)
{
    unsigned char depth = -1;
    unsigned int type = -1;
    sfVector2f pos = make_npc2(data, map, &i);

    type = my_getnbr(&map[i]);
    while (map[i] != ',')
        i++;
    i++;
    depth = my_getnbr(&map[i]);
    while (map[i] != ',')
        i++;
    i++;
    data->npcs = create_npc(data->npcs, my_strdup_to_c(&map[i], ']'));
    data->npcs = set_npc_depth(data->npcs, depth);
    data->npcs = set_npc_type(data->npcs, type);
    data->npcs = set_npc_position(data->npcs, pos);
    return (i);
}



/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** read_map2
*/

#include "../../include/my_rpg.h"
#include "my.h"

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

void construct_map(data_t *data, char *map)
{
    sfVector2f pos = {0, 0};
    int i = 0;

    for (; map[i]; i++) {
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
    get_npcs(data, &map[i]);
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

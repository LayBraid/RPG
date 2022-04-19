/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

static int check_vector(sfVector2f v1, sfVector2f v2)
{
    if (v1.x == v2.x && v1.y == v2.y)
        return 1;
    return 0;
}

node_letter *get_letter(data_t *data, sfVector2f position)
{
    node_letter *tmp = data->letters;

    while (tmp->next != NULL) {
        if (check_vector(tmp->pos, position))
            return tmp;
        tmp = tmp->next;
    }
    if (check_vector(tmp->pos, position))
        return tmp;
    return NULL;
}
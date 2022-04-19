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

node_letter *get_letter_c(data_t *data, char c)
{
    node_letter *tmp = data->letters;

    while (tmp->next != NULL) {
        if (tmp->letter == c)
            return tmp;
        tmp = tmp->next;
    }
    if (tmp->letter == c)
        return tmp;
    return NULL;
}

node_letter *del_letter(data_t *data, sfVector2f position)
{
    node_letter *tmp = data->letters;
    node_letter *tmp2 = data->letters;

    if (tmp == NULL)
        return NULL;
    if (check_vector(tmp->pos, position)) {
        data->letters = tmp->next;
        free(tmp);
        return data->letters;
    }
    while (tmp->next != NULL) {
        if (check_vector(tmp->next->pos, position)) {
            tmp2->next = tmp->next->next;
            free(tmp->next);
            return data->letters;
        }
        tmp2 = tmp;
        tmp = tmp->next;
    }
    return data->letters;
}

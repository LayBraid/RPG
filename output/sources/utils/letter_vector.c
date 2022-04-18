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

sfIntRect get_rect_letter(data_t *data, sfVector2f position)
{
    node_letter *tmp = data->letters;

    while (check_vector(position, tmp->pos) != 1 || tmp != NULL)
        tmp = tmp->next;
    if (tmp == NULL)
        return (sfIntRect) {0, 0, 0, 0};
    return tmp->rect;
}

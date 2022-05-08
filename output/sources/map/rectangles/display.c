/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

void display_rectangles_map(data_t *data)
{
    node_rectangle *tmp = data->map_hyrule;

    while (tmp->id < tmp->next->id) {
        sfRenderWindow_drawRectangleShape(data->video.window,
        tmp->rectangle, NULL);
        tmp = tmp->next;
    }
    sfRenderWindow_drawRectangleShape(data->video.window,
    tmp->rectangle, NULL);
}

void display_rectangles_tophouse(data_t *data)
{
    node_rectangle *tmp = data->map_tophouse;

    while (tmp->id < tmp->next->id) {
        sfRenderWindow_drawRectangleShape(data->video.window,
        tmp->rectangle, NULL);
        tmp = tmp->next;
    }
    sfRenderWindow_drawRectangleShape(data->video.window,
    tmp->rectangle, NULL);
}

void display_rectangles_house(data_t *data)
{
    node_rectangle *tmp = data->map_house;

    while (tmp->id < tmp->next->id) {
        sfRenderWindow_drawRectangleShape(data->video.window,
        tmp->rectangle, NULL);
        tmp = tmp->next;
    }
    sfRenderWindow_drawRectangleShape(data->video.window,
    tmp->rectangle, NULL);
}

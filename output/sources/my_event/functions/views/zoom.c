/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"

void zoom_map(data_t *data)
{
    sfView_zoom(data->mapping, 0.9f);
}

void unzoom_map(data_t *data)
{
    sfView_zoom(data->mapping, 1.1f);
}

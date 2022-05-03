/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "inventory.h"

void inventory_loop(data_t *data)
{
    data->video.ui = 6;
    display_all(data);
    analyse_event_inventory(data);
}

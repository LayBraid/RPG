/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"

void initialize_events(data_t *data)
{
    first_event(&data->my_event, cast_event("add_3_coins", add_3_coins));
}

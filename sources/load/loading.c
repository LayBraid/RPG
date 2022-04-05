/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loading
*/

#include "../../include/my_rpg.h"

void loading(data_t *data)
{
    switch (data->loading_state) {
        case (0): init_intro(data);
            break;
        case (1): delete_intro(data);
            break;
        case (2): init_menu(data);
            break;
        // case (3): delete_menu(data);
        //     break;
    }
}
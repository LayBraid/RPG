/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loading
*/

#include "my_rpg.h"
#include "intro.h"
#include "menu.h"

void loading(data_t *data)
{
    printf("LOAD : %d\n", data->loading_state);
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
/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "images.h"
#include "my_rpg.h"

/*
* Informations d'un bouton:
* 0: Position de l'image en X une fois display
* 1: Position de l'image en Y une fois display
* 2: Position du rect de l'image en position X
* 3: Position du rect de l'image en position Y
* 4: Height du rect
* 5: Width du rect
* 6: Position max de l'animations
* 7: ONLY FOR BUTTONS, PUT 0 FOR IMAGE
* 8: ONLY FOR BUTTONS, PUT 0 FOR IMAGE
* 9: ONLY FOR BUTTONS, PUT 0 FOR IMAGE
* 10: ONLY FOR BUTTONS, PUT 0 FOR IMAGE
* 11: Step où il va être display
* 12: Depth où il va être display
* 13: fichier de texture
*/

cf_t PLAYING[14] = {683, 875, 0, 2045, 141, 434, 2, 0,0, 0, 0, MAIN_MENU, 0,
0};

node_img *setup_img(data_t *data)
{
    node_img *node = malloc(sizeof(node_img));

    setup_first_img(&node, setup_a_anim_img(data, PLAYING));
    return node;
}

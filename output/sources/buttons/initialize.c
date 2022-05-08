/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "buttons.h"
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
* 7: Position X de la zone cliquable du bouton
* 8: Position Y de la zone cliquable du bouton
* 9: Taille max en X pour la zone cliquable
* 10: Taille max en Y pour la zone cliquable
* 11: Step où il va être display
* 12: Depth où il va être display
* 13: fichier de texture
*/

cf PLAY[14] = {683, 875, 0, 2045, 141, 434, 2, 713,915, 374, 61,
MAIN_MENU, 0, 0};
cf QUIT[14] = {683, 875, 0, 2045, 141, 434, 2, 713,915, 374, 61,
MAIN_MENU, 0, 0};

node_button *setup_buttons(data_t *data)
{
    node_button *node = malloc(sizeof(node_button));

    setup_first_button(&node, setup_button(data, PLAY, nothing));
    add_button(&node, setup_button(data, QUIT, nothing));
    return node;
}

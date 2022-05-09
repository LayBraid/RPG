/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** menu
*/

#ifndef MENU_H_
    #define MENU_H_

    #include "structures.h"

// init_menu.c
void init_menu(data_t *data);

// make_menu.c
void menu_scene(data_t *data);

// delete_menu.c
void delete_menuN(data_t *data);
void delete_menuL(data_t *data);
void delete_menuS(data_t *data);

// move_sword.c
void godown(data_t *data);
void gotop(data_t *data);

void drawtextmenu(data_t *data);

#endif /* !MENU_H_ */

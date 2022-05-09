/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** textmenu
*/

#include "my_rpg.h"
#include "menus.h"
#include "utils.h"
#include "my.h"

void drawtextmenu(data_t *data)
{
    my_text(data, (sfVector2f) {100, 200}, 5, "NEW GAME");
    my_text(data, (sfVector2f) {100, 300}, 5, "LOAD GAME");
    my_text(data, (sfVector2f) {100, 400}, 5, "SETTINGS");
    my_text(data, (sfVector2f) {100, 500}, 5, "CREDITS");
    my_text(data, (sfVector2f) {100, 600}, 5, "QUIT GAME");
}
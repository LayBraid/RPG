/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause
*/

#ifndef PAUSE_H_
    #define PAUSE_H_

    #include "structures.h"

// init_pause.c
void init_pause(data_t *data);

// pause.c
void pause_scene(data_t *data);

// delete_pause.c
void delete_pauseM(data_t *data);
void delete_pauseN(data_t *data);
void delete_pauseH(data_t *data);
void delete_pauseS(data_t *data);

// moove_pause.c
void go_down_pause(data_t *data);
void go_top_pause(data_t *data);

#endif /* !PAUSE_H_ */

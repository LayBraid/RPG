/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "structures.h"

static void put_letter(data_t *data, char letter, sfIntRect rect, sfVector2f vector)
{
    node_letter *new = malloc(sizeof(node_letter));
    new->letter = letter;
    new->rect = rect;
    new->pos = vector;
    new->next = data->letters;
    data->letters = new;
}

static void next_put_letter(data_t *data)
{
    put_letter(data, 'L', (IntR) {29, 104, 6, 13}, (sfVector2f) {317, 390});
    put_letter(data, 'M', (IntR) {45, 104, 7, 13}, (sfVector2f) {437, 390});
    put_letter(data, 'N', (IntR) {61, 104, 6, 13}, (sfVector2f) {557, 390});
    put_letter(data, 'O', (IntR) {77, 104, 6, 13}, (sfVector2f) {677, 390});
    put_letter(data, 'P', (IntR) {93, 104, 6, 13}, (sfVector2f) {797, 390});
    put_letter(data, 'Q', (IntR) {109, 104, 6, 13}, (sfVector2f) {917, 390});
    put_letter(data, 'R', (IntR) {125, 104, 6, 13}, (sfVector2f) {1037, 390});
    put_letter(data, 'S', (IntR) {142, 104, 6, 13}, (sfVector2f) {1157, 390});
    put_letter(data, 'T', (IntR) {158, 104, 7, 13}, (sfVector2f) {1277, 390});
    put_letter(data, 'U', (IntR) {14, 120, 6, 13}, (sfVector2f) {195, 470});
    put_letter(data, 'V', (IntR) {29, 120, 8, 13}, (sfVector2f) {317, 470});
    put_letter(data, 'W', (IntR) {45, 120, 7, 13}, (sfVector2f) {437, 470});
    put_letter(data, 'X', (IntR) {61, 120, 7, 13}, (sfVector2f) {557, 470});
    put_letter(data, 'Y', (IntR) {77, 120, 7, 13}, (sfVector2f) {677, 470});
    put_letter(data, 'Z', (IntR) {93, 120, 6, 13}, (sfVector2f) {797, 470});
    put_letter(data, ' ', (IntR) {93, 100, 6, 13}, (sfVector2f) {0, 0});
}

static void next_letter(data_t *data)
{
    put_letter(data, 's', (IntR) {145, 206, 6, 10}, (sfVector2f) {1157, 670});
    put_letter(data, 't', (IntR) {161, 203, 6, 13}, (sfVector2f) {1277, 670});
    put_letter(data, 'u', (IntR) {17, 222, 6, 10}, (sfVector2f) {195, 750});
    put_letter(data, 'v', (IntR) {33, 222, 7, 10}, (sfVector2f) {317, 750});
    put_letter(data, 'w', (IntR) {49, 222, 7, 10}, (sfVector2f) {437, 750});
    put_letter(data, 'x', (IntR) {65, 222, 7, 10}, (sfVector2f) {557, 750});
    put_letter(data, 'y', (IntR) {81, 222, 7, 12}, (sfVector2f) {677, 750});
    put_letter(data, 'z', (IntR) {97, 222, 6, 10}, (sfVector2f) {797, 750});
    put_letter(data, 'A', (IntR) {14, 88, 6, 13}, (sfVector2f) {195, 310});
    put_letter(data, 'B', (IntR) {29, 88, 6, 13}, (sfVector2f) {317, 310});
    put_letter(data, 'C', (IntR) {45, 88, 6, 13}, (sfVector2f) {437, 310});
    put_letter(data, 'D', (IntR) {61, 88, 6, 13}, (sfVector2f) {557, 310});
    put_letter(data, 'E', (IntR) {77, 88, 7, 13}, (sfVector2f) {677, 310});
    put_letter(data, 'F', (IntR) {93, 88, 6, 13}, (sfVector2f) {797, 310});
    put_letter(data, 'G', (IntR) {109, 88, 6, 13}, (sfVector2f) {917, 310});
    put_letter(data, 'H', (IntR) {125, 88, 6, 13}, (sfVector2f) {1037, 310});
    put_letter(data, 'I', (IntR) {144, 88, 3, 13}, (sfVector2f) {1157, 310});
    put_letter(data, 'J', (IntR) {158, 88, 6, 13}, (sfVector2f) {1277, 310});
    put_letter(data, 'K', (IntR) {14, 104, 6, 13}, (sfVector2f) {195, 390});
    next_put_letter(data);
}

void set_letters(data_t *data)
{
    data->letters = NULL;
    put_letter(data, 'a', (IntR) {17, 190, 6, 10}, (sfVector2f) {195, 590});
    put_letter(data, 'b', (IntR) {33, 187, 6, 13}, (sfVector2f) {317, 590});
    put_letter(data, 'c', (IntR) {49, 190, 6, 11}, (sfVector2f) {437, 590});
    put_letter(data, 'd', (IntR) {65, 187, 6, 13}, (sfVector2f) {557, 590});
    put_letter(data, 'e', (IntR) {81, 190, 6, 10}, (sfVector2f) {677, 590});
    put_letter(data, 'f', (IntR) {97, 187, 6, 13}, (sfVector2f) {797, 590});
    put_letter(data, 'g', (IntR) {113, 189, 6, 13}, (sfVector2f) {917, 590});
    put_letter(data, 'h', (IntR) {129, 187, 6, 13}, (sfVector2f) {1037, 590});
    put_letter(data, 'i', (IntR) {147, 187, 3, 13}, (sfVector2f) {1157, 590});
    put_letter(data, 'j', (IntR) {161, 187, 5, 15}, (sfVector2f) {1277, 590});
    put_letter(data, 'k', (IntR) {17, 203, 6, 13}, (sfVector2f) {195, 670});
    put_letter(data, 'l', (IntR) {35, 203, 3, 13}, (sfVector2f) {317, 670});
    put_letter(data, 'm', (IntR) {49, 206, 7, 10}, (sfVector2f) {437, 670});
    put_letter(data, 'n', (IntR) {65, 206, 6, 10}, (sfVector2f) {557, 670});
    put_letter(data, 'o', (IntR) {81, 206, 6, 10}, (sfVector2f) {677, 670});
    put_letter(data, 'p', (IntR) {97, 206, 6, 12}, (sfVector2f) {797, 670});
    put_letter(data, 'q', (IntR) {113, 206, 6, 12}, (sfVector2f) {917, 670});
    put_letter(data, 'r', (IntR) {129, 206, 5, 10}, (sfVector2f) {1037, 670});
    next_letter(data);
}

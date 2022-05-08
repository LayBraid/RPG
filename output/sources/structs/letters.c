/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "structures.h"

static void put_letter(data_t *data, char letter,
sfIntRect rect, sfVector2f vector)
{
    node_letter *new = malloc(sizeof(node_letter));
    new->letter = letter;
    new->rect = rect;
    new->pos = vector;
    new->next = data->letters;
    data->letters = new;
}

static void set_nbrs(data_t *data)
{
    put_letter(data, '0', (IntR_t) {15, 139, 7, 13}, (sfVector2f) {317, 390});
    put_letter(data, '1', (IntR_t) {33, 139, 6, 13}, (sfVector2f) {317, 390});
    put_letter(data, '2', (IntR_t) {47, 139, 7, 13}, (sfVector2f) {317, 390});
    put_letter(data, '3', (IntR_t) {63, 139, 6, 13}, (sfVector2f) {317, 390});
    put_letter(data, '4', (IntR_t) {79, 139, 6, 13}, (sfVector2f) {317, 390});
    put_letter(data, '5', (IntR_t) {15, 155, 7, 13}, (sfVector2f) {317, 390});
    put_letter(data, '6', (IntR_t) {31, 155, 7, 13}, (sfVector2f) {317, 390});
    put_letter(data, '7', (IntR_t) {47, 155, 7, 13}, (sfVector2f) {317, 390});
    put_letter(data, '8', (IntR_t) {63, 155, 6, 13}, (sfVector2f) {317, 390});
    put_letter(data, '9', (IntR_t) {79, 155, 6, 13}, (sfVector2f) {317, 390});
}

static void next_put_letter(data_t *data)
{
    put_letter(data, 'L', (IntR_t) {30, 104, 6, 13}, (sfVector2f) {317, 390});
    put_letter(data, 'M', (IntR_t) {45, 104, 8, 13}, (sfVector2f) {437, 390});
    put_letter(data, 'N', (IntR_t) {61, 104, 7, 13}, (sfVector2f) {557, 390});
    put_letter(data, 'O', (IntR_t) {77, 104, 8, 13}, (sfVector2f) {677, 390});
    put_letter(data, 'P', (IntR_t) {93, 104, 8, 13}, (sfVector2f) {797, 390});
    put_letter(data, 'Q', (IntR_t) {109, 104, 8, 13}, (sfVector2f) {917, 390});
    put_letter(data, 'R', (IntR_t) {125, 104, 7, 13},
    (sfVector2f) {1037, 390});
    put_letter(data, 'S', (IntR_t) {142, 104, 6, 13},
    (sfVector2f) {1157, 390});
    put_letter(data, 'T', (IntR_t) {158, 104, 8, 13},
    (sfVector2f) {1277, 390});
    put_letter(data, 'U', (IntR_t) {14, 120, 7, 13}, (sfVector2f) {195, 470});
    put_letter(data, 'V', (IntR_t) {30, 120, 8, 13}, (sfVector2f) {317, 470});
    put_letter(data, 'W', (IntR_t) {45, 120, 8, 13}, (sfVector2f) {437, 470});
    put_letter(data, 'X', (IntR_t) {61, 120, 7, 13}, (sfVector2f) {557, 470});
    put_letter(data, 'Y', (IntR_t) {77, 120, 7, 13}, (sfVector2f) {677, 470});
    put_letter(data, 'Z', (IntR_t) {93, 120, 6, 13}, (sfVector2f) {797, 470});
    put_letter(data, ' ', (IntR_t) {17, 0, 6, 10}, (sfVector2f) {0, 0});
    set_nbrs(data);
}

static void next_letter(data_t *data)
{
    put_letter(data, 's', (IntR_t) {145, 206, 6, 10},
    (sfVector2f) {1157, 670});
    put_letter(data, 't', (IntR_t) {161, 203, 7, 13},
    (sfVector2f) {1277, 670});
    put_letter(data, 'u', (IntR_t) {17, 222, 7, 10}, (sfVector2f) {195, 750});
    put_letter(data, 'v', (IntR_t) {33, 222, 7, 10}, (sfVector2f) {317, 750});
    put_letter(data, 'w', (IntR_t) {49, 222, 7, 10}, (sfVector2f) {437, 750});
    put_letter(data, 'x', (IntR_t) {65, 222, 7, 10}, (sfVector2f) {557, 750});
    put_letter(data, 'y', (IntR_t) {81, 222, 7, 12}, (sfVector2f) {677, 750});
    put_letter(data, 'z', (IntR_t) {97, 222, 6, 10}, (sfVector2f) {797, 750});
    put_letter(data, 'A', (IntR_t) {14, 88, 6, 13}, (sfVector2f) {195, 310});
    put_letter(data, 'B', (IntR_t) {29, 88, 6, 13}, (sfVector2f) {317, 310});
    put_letter(data, 'C', (IntR_t) {46, 88, 7, 13}, (sfVector2f) {437, 310});
    put_letter(data, 'D', (IntR_t) {61, 88, 7, 13}, (sfVector2f) {557, 310});
    put_letter(data, 'E', (IntR_t) {77, 88, 8, 13}, (sfVector2f) {677, 310});
    put_letter(data, 'F', (IntR_t) {94, 88, 6, 13}, (sfVector2f) {797, 310});
    put_letter(data, 'G', (IntR_t) {109, 88, 8, 13}, (sfVector2f) {917, 310});
    put_letter(data, 'H', (IntR_t) {125, 88, 6, 13},
    (sfVector2f) {1037, 310});
    put_letter(data, 'I', (IntR_t) {144, 88, 4, 13},
    (sfVector2f) {1157, 310});
    put_letter(data, 'J', (IntR_t) {158, 88, 6, 13},
    (sfVector2f) {1277, 310});
    put_letter(data, 'K', (IntR_t) {14, 104, 6, 13}, (sfVector2f) {195, 390});
    next_put_letter(data);
}

void set_letters(data_t *data)
{
    data->letters = NULL;
    put_letter(data, 'a', (IntR_t) {17, 190, 6, 10}, (sfVector2f) {195, 590});
    put_letter(data, 'b', (IntR_t) {33, 187, 6, 13}, (sfVector2f) {317, 590});
    put_letter(data, 'c', (IntR_t) {49, 190, 6, 10}, (sfVector2f) {437, 590});
    put_letter(data, 'd', (IntR_t) {65, 187, 6, 13}, (sfVector2f) {557, 590});
    put_letter(data, 'e', (IntR_t) {81, 190, 6, 10}, (sfVector2f) {677, 590});
    put_letter(data, 'f', (IntR_t) {97, 187, 6, 13}, (sfVector2f) {797, 590});
    put_letter(data, 'g', (IntR_t) {113, 189, 6, 13},
    (sfVector2f) {917, 590});
    put_letter(data, 'h', (IntR_t) {129, 187, 6, 13},
    (sfVector2f) {1037, 590});
    put_letter(data, 'i', (IntR_t) {147, 187, 3, 13},
    (sfVector2f) {1157, 590});
    put_letter(data, 'j', (IntR_t) {161, 187, 5, 15},
    (sfVector2f) {1277, 590});
    put_letter(data, 'k', (IntR_t) {17, 203, 6, 13}, (sfVector2f) {195, 670});
    put_letter(data, 'l', (IntR_t) {35, 203, 4, 13}, (sfVector2f) {317, 670});
    put_letter(data, 'm', (IntR_t) {49, 206, 8, 10}, (sfVector2f) {437, 670});
    put_letter(data, 'n', (IntR_t) {65, 206, 6, 10}, (sfVector2f) {557, 670});
    put_letter(data, 'o', (IntR_t) {81, 206, 7, 10}, (sfVector2f) {677, 670});
    put_letter(data, 'p', (IntR_t) {97, 206, 6, 12}, (sfVector2f) {797, 670});
    put_letter(data, 'q', (IntR_t) {113, 206, 6, 12},
    (sfVector2f) {917, 670});
    put_letter(data, 'r', (IntR_t) {129, 206, 6, 10},
    (sfVector2f) {1037, 670});
    next_letter(data);
}

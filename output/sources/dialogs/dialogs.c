/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialogs
*/

#include "my_rpg.h"

void dialog(data_t *data, char *dialog, char *name, char is_talking)
{
    char *new = malloc((strlen(dialog) + 1) * sizeof(char));

    new[0] = '\0';
    data->texts = create_text(data->texts, new, data->font);
    sfText_setColor(data->texts->text, sfWhite);
    sfText_setPosition(data->texts->text, (sfVector2f){200, 500});
    for (int i = 0; dialog[i]; i++) {
        new[i] = dialog[i];
        new[i + 1] = '\0';
        sfText_setString(data->texts->text, new);
        printf("%d\n", i);
        if (dialog[i] != ' ')
            while (sfClock_getElapsedTime(data->clock).microseconds < 50000);
        sfRenderWindow_clear(data->video.window, sfWhite);
        display_all(data);
        sfRenderWindow_display(data->video.window);
        sfClock_restart(data->clock);
    }
}

static void delete_first_tile(data_t *data)
{
    tile_t *cursor = data->tiles;

    if (data->tiles != NULL) {
        data->tiles = data->tiles->next;
        cursor = delete_tile(cursor);
    }
}

void dialog_init(data_t *data)
{
    data->tiles = create_tile(data->tiles);
    data->texture_bank = create_texture(data->texture_bank, "./assets/textures/dialog.png", NULL);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_depth(data->tiles, 7);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f) {4, 4});
    printf("here\n");
    dialog(data, "The Legend of Zelda inspired game, by : not Oscar who's not here.", "", 0);
    sfText_destroy(data->texts->text);
    free(data->texts);
    data->texts = NULL;
    delete_first_tile(data);
    while (1);
}

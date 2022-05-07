/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** data_creation
*/

#include "my_event.h"
#include "parsing_data.h"
#include "buttons.h"
#include "images.h"
#include "map.h"
#include "player.h"
#include "editor.h"

const char *WORLD_TILES = "assets/game/Overworld tiles.png";

data_t *data_delete(data_t *data)
{
    // data->player.inventory = delete_inventory(data->player.inventory);
    sfClock_destroy(data->player.movement_clock);
    sfClock_destroy(data->player.movement_anim_clock);
    data->texture_bank = delete_all_textures(data->texture_bank);
    sfFont_destroy(data->font);
    data->texts = delete_all_texts(data->texts);
    data->buttons = delete_all_buttons(data->buttons);
    data->npcs = delete_all_npcs(data->npcs);
    data->tiles = delete_all_tiles(data->tiles);
    free(data);
    return (NULL);
}

void init_music(data_t *data)
{
    create_music(data, "./assets/Sound/ladja.ogg", 1);
    sfMusic_play(data->musics->music);
}

//TODO Resize function "data_create"

void data_create(data_t *data)
{
    data->video.ui = 32;
    data->player.items = "1100000\0";
    data->player.equiped = 0;
    data->player.depth = 0;
    data->player.hp_max = 10;
    data->player.current_hp = 10;
    data->player.inventory = NULL;
    data->player.name = "";
    data->video.drag = -1;
    data->player.rectangle = sfRectangleShape_create();
    data->player.rect = (sfIntRect){0, 0, 0, 0};
    data->player.position = (sfVector2f){0, 0};
    data->player.movement_clock = sfClock_create();
    data->player.movement_anim_clock = sfClock_create();
    data->texture_bank = NULL;
    data->font = NULL; // TODO add font
    data->texts = NULL;
    data->buttons = NULL;
    data->npcs = NULL;
    data->tiles = NULL;
    data->delta = 1.0f;
    data->loading_state = 0;
    data->my_event = NULL;
    data->musics = NULL;
    data->world = sfTexture_createFromFile(WORLD_TILES, NULL);
    // init_music(data);
    data->quest = NULL;
    parsing_data(data);
    initialize_events(data);
    data->button = setup_buttons(data);
    data->images = setup_img(data);
    data->main = sfView_create();
    data->mapping = sfView_create();
    sfView_setSize(data->main, (sfVector2f) {1920, 1080});
    sfView_setSize(data->mapping, (sfVector2f) {1920, 1080});
    sfView_zoom(data->mapping, 0.33f); //TODO Create a reverse function for zoom
    sfView_setCenter(data->main, (sfVector2f) {1920.0f / 2, 1080.0f / 2});
    sfView_setCenter(data->mapping, (sfVector2f) {0.0f, 0.0f});
    sfView_move(data->mapping, (sfVector2f) {316, 1080 + 243});
    data->textures = init_textures();
    data->map = NULL;
    get_map(data);
    set_letters(data);
    setup_texture_player(data);
}

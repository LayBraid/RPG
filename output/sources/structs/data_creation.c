/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** data_creation
*/

#include "my_rpg.h"
#include "my_event.h"
#include "parsing_data.h"
#include "buttons.h"
#include "images.h"
#include "map.h"
#include "player.h"

data_t *data_delete(data_t *data)
{
    data->player.inventory = delete_inventory(data->player.inventory);
    sfClock_destroy(data->player.move_animation);
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
    float info[4] = {0};
    data->video.ui = 32;
    data->player.depth = 0;
    data->player.hp_max = 10;
    data->player.current_hp = 10;
    data->player.inventory = NULL;
    data->player.name = "";
    data->player.rectangle = sfRectangleShape_create();
    data->player.rect = (sfIntRect){0, 0, 0, 0};
    data->player.position = (sfVector2f){0, 0};
    data->player.move_animation = sfClock_create();
    data->texture_bank = NULL;
    data->font = sfFont_createFromFile("assets/zeldadxt.ttf"); // TODO add font
    data->texts = NULL;
    data->buttons = NULL;
    data->npcs = NULL;
    data->tiles = NULL;
    data->delta = 1.0f;
    data->loading_state = 0;
    data->my_event = NULL;
    data->musics = NULL;
    // init_music(data);
    data->clock = sfClock_create();
    data->quest = NULL;
    parsing_data(data);
    initialize_events(data);
    data->button = setup_buttons(data);
    data->images = setup_img(data);
    data->main = sfView_create();
    data->mapping = sfView_create();
    data->players = sfView_create();
    sfView_setSize(data->main, (sfVector2f) {1920, 1080});
    sfView_setSize(data->mapping, (sfVector2f) {1920, 1080});
    sfView_setSize(data->players, (sfVector2f) {1920, 1080});
    sfView_zoom(data->mapping, 0.5f);
    sfView_setCenter(data->main, (sfVector2f) {1920 / 2, 1080 / 2});
    sfView_setCenter(data->mapping, (sfVector2f) {1920 / 2, 1080 / 2});
    sfView_setCenter(data->players, (sfVector2f) {1920 / 2, 1080 / 2});
    data->texture = init_textures_map();
    data->tmp = sfTexture_createFromFile("assets/game/Overworld tiles.png", NULL);
    data->map = NULL;
    get_map(data);
    set_letters(data);
    setup_texture_player(data);
}

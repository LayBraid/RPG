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
#include "keybind.h"

const char *WORLD_TILES = "assets/game/Overworld tiles.png";
const char *NPC_TILES = "assets/game/npc.png";
const char *ENEMIES_TILES = "assets/game/enemies.png";

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
    add_music(data, "assets/sound/menu.ogg", 1);
    add_music(data, "assets/sound/aventure.ogg", 1);
    add_music(data, "assets/sound/village.ogg", 1);
    add_music(data, "assets/sound/foret.ogg", 1);
    add_music(data, "assets/sound/combat.ogg", 1);
    add_music(data, "assets/sound/montagnes.ogg", 1);
    add_music(data, "assets/sound/cavedj1.ogg", 1);
    add_music(data, "assets/sound/djfinal.ogg", 1);
    add_music(data, "assets/sound/finalboss.ogg", 1);
}

void fill_items(data_t *data)
{
    for (int i = 0 ; i < 7 ; i++)
        data->player.items[i] = '0';
}

//TODO Resize function "data_create"

void data_create(data_t *data)
{
    data->video.ui = 32;
    data->player.depth = 0;
    data->player.hp_max = 10;
    data->player.items = malloc(sizeof(char) * 8);
    fill_items(data);
    data->player.skill_pts = 1;
    get_items(data);
    data->player.current_hp = 10;
    data->player.inventory = NULL;
    data->player.name = "";
    data->player.rectangle = sfRectangleShape_create();
    data->player.rect = (sfIntRect){0, 0, 0, 0};
    data->player.position = (sfVector2f){0, 0};
    data->player.movement_clock = sfClock_create();
    data->player.movement_anim_clock = sfClock_create();
    data->enemies_aggro = sfClock_create();
    data->texture_bank = NULL;
    data->font = sfFont_createFromFile("./assets/zeldadxt.ttf"); // TODO add font
    data->texts = NULL;
    data->buttons = NULL;
    data->npcs = NULL;
    data->tiles = NULL;
    data->enemies = NULL;
    data->clock = sfClock_create();
    data->interact.status = 0;
    data->interact.npc_id = -1;
    data->delta = 1.0f;
    data->loading_state = 0;
    data->my_event = NULL;
    data->musics = NULL;
    data->world = sfTexture_createFromFile(WORLD_TILES, NULL);
    data->npc = sfTexture_createFromFile(NPC_TILES, NULL);
    data->enemies_texture = sfTexture_createFromFile(ENEMIES_TILES, NULL);
    init_music(data);
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
    sfView_move(data->mapping, (sfVector2f) {316, 1080 + 243 + 750});
    data->textures = init_textures();
    data->map = NULL;
    get_map(data);
    set_letters(data);
    setup_texture_player(data);
    get_items(data);
    assign_keys(data);
    data->settings_state = malloc(sizeof(char) * 4);
    data->settings_state = "MENU";
}

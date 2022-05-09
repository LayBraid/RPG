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
#include "my.h"

const char *WORLD_TILES = "assets/game/Overworld tiles.png";
const char *NPC_TILES = "assets/game/npc.png";
const char *ENEMIES_TILES = "assets/game/enemies.png";

data_t *data_delete(data_t *data)
{
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

//TODO Resize function "data_create"

void data_create(data_t *data)
{
    data->video.ui = 32;
    data->player.equiped = 0;
    data->player.depth = 0;
    data->player.hp_max = 10;
    data->player.dmg = 1;
    data->player.comp = my_strdup("0000000");
    data->player.items = my_strdup("10000");
    data->player.skill_pts = 4;
    get_items(data);
    data->player.current_hp = 10;
    data->player.inventory = NULL;
    data->player.name = "";
    data->video.drag = -1;
    data->player.rectangle = sfRectangleShape_create();
    data->player.rect = (sfIntRect){0, 0, 0, 0};
    data->player.position = (sfVector2f){0, 0};
    data->player.movement_clock = sfClock_create();
    data->player.movement_anim_clock = sfClock_create();
    data->enemies_aggro = sfClock_create();
    data->texture_bank = NULL;
    data->font = sfFont_createFromFile("assets/zeldadxt.ttf");
    data->texts = NULL;
    data->buttons = NULL;
    data->tiles = NULL;
    data->clock = sfClock_create();
    data->interact.status = 0;
    data->interact.npc_id = -1;
    data->delta = 1.0f;
    data->loading_state = 0;
    data->my_event = NULL;
    data->world = sfTexture_createFromFile(WORLD_TILES, NULL);
    data->npc = sfTexture_createFromFile(NPC_TILES, NULL);
    data->enemies_texture = sfTexture_createFromFile(ENEMIES_TILES, NULL);
    data->link = sfTexture_createFromFile("assets/game/Link.png", NULL);
    data->musics = NULL;
    init_music(data);
    initialize_events(data);
    data->button = setup_buttons(data);
    data->images = setup_img(data);
    data->main = sfView_create();
    data->mapping = sfView_create();
    sfView_setSize(data->main, (sfVector2f) {1920, 1080});
    sfView_setSize(data->mapping, (sfVector2f) {1920, 1080});
    sfView_zoom(data->mapping, 0.33f);
    sfView_setCenter(data->main, (sfVector2f) {1920.0f / 2, 1080.0f / 2});
    sfView_setCenter(data->mapping, (sfVector2f) {0.0f, 0.0f});
    data->textures = init_textures();
    data->map_hyrule = NULL;
    data->map_tophouse = NULL;
    data->map_house = NULL;
    data->map_dj = NULL;
    parsing_data(data);
    get_map(data);
    get_map_tophouse(data);
    get_map_house(data);
    get_map_dj(data);
    set_letters(data);
    setup_texture_player(data);
    set_map(data, 0);
    get_items(data);
    assign_keys(data);
    data->settings_state = malloc(sizeof(char) * 4);
    data->settings_state = "MENU";
}

/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** structures
*/

#ifndef STRUCTURES_H_
    #define STRUCTURES_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/System.h>
    #include <SFML/OpenGL.h>

    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <string.h>
    #include <math.h>
    #include <sys/stat.h>

typedef struct data data_t;
typedef struct editor_data editor_t;
typedef const float cf_t;
typedef sfIntRect IntR_t;

typedef struct anim_img_struct {
    sfSprite *sprite;
    int texture_file;
    int anim_max;
    int anim_pos;
    int x_power_anim;
    int y_power_anim;
    int init_rect_x;
    int init_rect_y;
    int step_display;
    int depth;
} anim_img;

typedef struct outline {
    unsigned int id;
    sfSprite *sprite;
    sfIntRect rect;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f move;
    struct outline *next;
} outline_t;

typedef struct hovered_button_struct {
    anim_img *button;
    float x_click;
    float y_click;
    float x_max;
    float y_max;
    void (* function)(data_t *data);
} hovered_button;

typedef struct node_button_struct {
    int id;
    hovered_button *button;
    struct node_button_struct *next;
} node_button;

typedef struct node_img_struct {
    int id;
    anim_img *img;
    struct node_img_struct *next;
} node_img;

typedef struct event_list_type {
    char *name;
    int calls;
    struct event_list_type *next;
} event_list_t;

typedef struct quest_type {
    int id;
    int status;
    char *name;
    char *display_name;
    char *description;
    event_list_t *requirements;
    event_list_t *rewards;
    struct quest_type *next;
} quest_t;

typedef struct profile_type {
    char *name;
    int coins;
} profile_t;

typedef struct event_type {
    int id;
    int calling;
    char *name;
    void (*function)(data_t *data);
    struct event_type *next;
} event_t;

typedef struct tile {
    unsigned int id;
    unsigned char depth;
    unsigned int type;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f position;
    sfVector2f scale;
    sfVector2f move;
    float rotation;
    struct tile *next;
} tile_t;

typedef struct button {
    unsigned int id;
    sfSprite *sprite;
    sfIntRect rect;
    sfText *text;
    sfVector2f position;
    struct button *next;
} button_t;

typedef struct text {
    unsigned int id;
    sfText *text;
    sfVector2f position;
    struct text *next;
} text_t;

typedef struct texture {
    unsigned int id;
    sfTexture *texture;
    sfIntRect rect;
    int max_rect;
    struct texture *next;
} texture_t;

typedef struct npc_inventory {
    char *item_name;
    sfSprite *sprite;
    sfIntRect rect;
    unsigned int count;
    struct npc_inventory *next;
} npc_inventory_t;

typedef struct object {
    unsigned int id;
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
    struct object *next;
} object_t;

typedef struct inventory {
    sfTexture *texture_item;
    sfTexture *texture_rect;
    sfSprite *sprite_item;
    sfSprite *sprite_rect;
    sfVector2f position_item;
    sfVector2f position_rect;
    sfIntRect rect_item;
    sfIntRect rect_rect;
    int item;
    int main;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect *rect;
    struct inventory *next;
} inventory_t;

typedef struct node_movement_struct {
    int id;
    sfVector2f delta;
    struct node_movement_struct *next;
} node_movement;

typedef struct node_animation_struct {
    int id;
    int state;
    int value;
    struct node_animation_struct *next;
} node_animation;

typedef struct attack_effect_s {
    int id;
    int movement_or_anim;
    int type;
    int equipped;
    sfRectangleShape *rectangle;
    sfVector2f position;
    sfClock *movement_clock;
    node_movement *movement;
    node_animation *animation;
    struct attack_effect_s *next;
} attack_effect_t;

typedef struct npc {
    unsigned int id;
    char *name;
    unsigned char type;
    unsigned char map;
    unsigned char depth;
    int hp_max;
    int current_hp;
    int texture_id;
    npc_inventory_t *inventory;
    sfRectangleShape *rectangle;
    sfIntRect rect;
    char *event_call;
    int max_rect;
    sfVector2f position;
    sfClock *clock;
    struct npc *next;
} npc_t;

typedef struct enemy_struct {
    int id;
    char *name;
    int type;
    int depth;
    int range;
    int map;
    float hp;
    float max_hp;
    int display_life;
    int dead;
    attack_effect_t *attack_effect;
    sfClock *display_life_clock;
    sfClock *movement_clock;
    node_movement *movement;
    sfRectangleShape *rectangle;
    sfVector2f position;
    struct enemy_struct *next;
} enemy_t;

typedef struct player {
    char *name;
    char *comp;
    char *items;
    int stamina;
    unsigned char depth;
    int equiped;
    int hp_max;
    int current_hp;
    int equipped;
    int clement;
    int state;
    int animation;
    int lvl;
    int scale_reverse;
    int skill_pts;
    int dmg;
    int damage_display;
    attack_effect_t *attack_effect;
    sfClock *damage_display_clock;
    sfClock *movement_clock;
    node_movement *movement;
    sfClock *movement_anim_clock;
    node_movement *movement_anim;
    inventory_t *inventory;
    sfRectangleShape *rectangle;
    sfIntRect rect;
    sfVector2f position;
} player_t;

typedef struct video {
    sfRenderWindow *window;
    sfVideoMode mode;
    unsigned int ui;
    int drag;
} video_t;

typedef struct music {
    sfMusic *music;
    int loop;
    int volume;
    int is_playing;
    struct music *next;
} music_t;

typedef struct node_rectangle_struct {
    int id;
    sfRectangleShape *rectangle;
    int type;
    int depth;
    float x;
    float y;
    struct node_rectangle_struct *next;
} node_rectangle;

typedef struct node_texture_struct {
    int id;
    int id_r;
    int type;
    char *name;
    void(*function)(sfTexture *texture, node_rectangle *rectangle);
    struct node_texture_struct *prev;
    struct node_texture_struct *next;
} node_texture;

typedef struct letter {
    sfVector2f pos;
    sfVector2f view;
    int count;
    int state;
    char *name;
    sfClock *clock;
} letter_t;

typedef struct node_letter_struct {
    char letter;
    sfIntRect rect;
    sfVector2f pos;
    struct node_letter_struct *next;
} node_letter;

typedef struct settings_s {
    int fps;
    int volume;
} settings_t;

typedef struct keys_s {
    int up;
    int down;
    int left;
    int right;
    int attack;
    int interact;
    int back;
    int inventory;
    int pause;
    char **key;
} keys_t;

typedef struct interact_s {
    int status;
    int npc_id;
    int enemy_id;
    double enemy_distance;
    int npc_id_dialogs;
} interact_t;

struct data {
    video_t video;
    settings_t *settings;
    keys_t *keys;
    player_t player;
    texture_t *texture_bank;
    sfFont *font;
    text_t *texts;
    button_t *buttons;
    npc_t *npcs;
    inventory_t *items;
    tile_t *tiles;
    sfEvent event;
    object_t *objects;
    music_t *musics;
    event_t *my_event;
    quest_t *quest;
    letter_t *letter;
    node_letter *letters;
    outline_t *outline;
    float delta;
    sfClock *clock;
    char dialog_skip;
    int id_text_player;
    unsigned char loading_state;
    int x_pile_hyrule;
    int y_pile_hyrule;
    node_button *button;
    node_img *images;
    sfView *main;
    sfView *mapping;
    node_texture *textures;
    sfTexture *world;
    sfTexture *link;
    sfTexture *npc;
    sfTexture *enemies_texture;
    interact_t interact;
    int my_map;
    node_rectangle *map_hyrule;
    int **collisions_hyrule;
    sfVector2f position_hyrule;
    node_rectangle *map_tophouse;
    int **collisions_tophouse;
    sfVector2f position_tophouse;
    node_rectangle *map_house;
    int **collisions_house;
    sfVector2f position_house;
    node_rectangle *map_dj;
    int **collisions_dj;
    sfVector2f position_dj;
    char *settings_state;
    enemy_t *enemies;
    sfClock *enemies_aggro;
};

struct editor_data {
    int size;
    char *path;
    sfRenderWindow *window;
    node_rectangle *current;
    node_rectangle *current_next;
    node_rectangle *current_prev;
    sfRectangleShape *background;
    node_rectangle *rectangles;
    sfTexture *world;
    sfTexture *home;
    node_texture *textures;
    sfView *view;
    sfView *main;
    sfView *preview;
    int press;
    int mode;
    int anim_pos;
    sfClock *anim;
    char *research;
};

// display_all.c
void display_all(data_t *data);

// display_utils.c
void display_tile_depth(tile_t *start, video_t video,
unsigned char depth, int map);
void display_npc_depth(npc_t *start, video_t video,
unsigned char depth, int map);
void display_buttons(button_t *start, video_t video);
void display_texts(text_t *start, video_t video);
void display_player_depth(player_t player, video_t video, unsigned char depth);
void display_enemies_depth(enemy_t *start, video_t video,
unsigned char depth, int map);

// data_creation.c
data_t *data_delete(data_t *data);
void data_create(data_t *data);

// tiles.c
tile_t *create_tile(tile_t *start);
tile_t *delete_tile(tile_t *node);
tile_t *delete_first_tile(data_t *data);
tile_t *delete_all_tiles(tile_t *start);
tile_t *tile_set_type(tile_t *tile, int type);

// tiles_utils.c
tile_t *set_tile_depth(tile_t *tile, unsigned char depth);
tile_t *set_tile_texture(tile_t *node, texture_t *texture);
tile_t *set_tile_position(tile_t *node, sfVector2f position);
tile_t *set_tile_scale(tile_t *node, sfVector2f scale);
tile_t *set_tile_move(tile_t *node, sfVector2f move);
tile_t *set_tile_rotation(tile_t *node, float rotation);

// npc.c
npc_t *create_npc(npc_t *start, char *name);
npc_t *set_npc_depth(npc_t *npc, unsigned char depth);
npc_t *delete_npc(npc_t *node);
npc_t *delete_all_npcs(npc_t *start);

// music.c
void add_music(data_t *data, char *path, int loop);
void intro_music(data_t *data);

//objects.c
void create_object(data_t *data, sfIntRect rect, sfVector2f pos, char *filepath);
void display_all_objects(data_t *data);
object_t *delete_all_objects(object_t *start);

// npc_utils.c
npc_t *set_npc_type(npc_t *node, unsigned char type);
npc_t *set_npc_texture(npc_t *node, texture_t *texture);
npc_t *set_npc_position(npc_t *node, sfVector2f position);
npc_t *decrease_npc_hp(npc_t *node, int value);
npc_t *increase_npc_hp(npc_t *node, int value);

//outline.c
void create_outline(data_t *data, sfIntRect rect, sfVector2f pos);
void display_outline(data_t *data);
outline_t *delete_all_outline(outline_t *start);

// npc_utils_2.c
npc_t *set_npc_max_hp(npc_t *node, int value);
npc_t *set_npc_current_hp(npc_t *node, int value);
npc_t *set_npc_to_max_hp(npc_t *node);
npc_t *npc_set_event(npc_t *node, char *event);
npc_t *npc_set_map(npc_t *node, int value);

void npc_set_size_rectangle(npc_t *node, sfVector2f size);
void npc_set_rectangle_texture(npc_t *node, sfTexture *texture);
void npc_set_rectangle_texture_rect(npc_t *node, sfIntRect rect);

// button.c
button_t *create_button(button_t *start, char *string, sfFont *font);
button_t *delete_button(button_t *node);
button_t *delete_all_buttons(button_t *start);

// button_utils.c
button_t *set_button_texture(button_t *node, texture_t *texture);
button_t *set_button_position(button_t *node, sfVector2f position);
button_t *set_button_string(button_t *node, char *string);

// text.c
text_t *create_text(text_t *start, char *string, sfFont *font);
text_t *delete_text(text_t *node);
text_t *delete_all_texts(text_t *start);

// text_utils.c
text_t *set_text_position(text_t *node, sfVector2f position);

// texture.c
texture_t *create_texture(texture_t *start, char *filepath, sfIntRect *area);
texture_t *delete_texture(texture_t *node);
texture_t *delete_all_textures(texture_t *start);

// texture_utils.c
texture_t *set_texture_rect(texture_t *node, sfIntRect rect, int max_r);

// npc_inventory.c
npc_inventory_t *create_inventory(npc_inventory_t *start, char *name);
npc_inventory_t *delete_inventory(npc_inventory_t *node);
npc_inventory_t *delete_whole_inventory(npc_inventory_t *start);

// npc_inventory_utils.c
npc_inventory_t *set_inventory_count(npc_inventory_t *node,
unsigned int count);
npc_inventory_t *set_npc_inventory_texture(npc_inventory_t *node,
texture_t *texture);

// // inventory.c
// inventory_t *create_inventory(inventory_t *start, char *name);
// inventory_t *delete_inventory(inventory_t *node);
// inventory_t *delete_whole_inventory(inventory_t *start);

// // inventory_utils.c
// inventory_t *set_inventory_count(inventory_t *node, unsigned int count);
// inventory_t *set_inventory_texture(inventory_t *node, texture_t *texture);

// inventory_utils.c
void get_items(data_t *data);
void display_items(data_t *data);
void create_items(data_t *data, int idx, int mod, sfVector2f pos);
inventory_t *delete_inventory_de_oscar(data_t *data);

// video_utils.c
void set_fps(sfRenderWindow *window, int fps, data_t *data);
video_t set_video(video_t video, int width, int height, int bpp);

void set_letters(data_t *data);

#endif /* !STRUCTURES_H_ */

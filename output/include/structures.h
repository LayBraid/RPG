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

//TODO Reformat imports

    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <string.h>
    #include <math.h>
    #include <sys/stat.h>

typedef struct data data_t;
typedef const float cf;

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

typedef struct inventory {
    char *item_name;
    sfSprite *sprite;
    sfIntRect rect;
    unsigned int count;
    struct inventory *next;
} inventory_t;

typedef struct npc {
    unsigned int id;
    char *name;
    unsigned char type;
    unsigned char depth;
    int hp_max;
    int current_hp;
    inventory_t *inventory;
    sfSprite *sprite;
    sfIntRect rect;
    int max_rect;
    sfVector2f position;
    sfClock *clock;
    struct npc *next;
} npc_t;

typedef struct player {
    char *name;
    unsigned char depth;
    int hp_max;
    int current_hp;
    inventory_t *inventory;
    sfSprite *sprite;
    sfIntRect rect;
    int max_rect;
    sfVector2f position;
    sfClock *clock;
} player_t;

typedef struct video {
    sfRenderWindow *window;
    sfVideoMode mode;
    unsigned int ui;
} video_t;

typedef struct music {
    sfMusic *music;
    int loop;
    int volume;
    int is_playing;
    struct music *next;
} music_t;

struct data {
    video_t video;
    player_t player;
    texture_t *texture_bank;
    sfFont *font;
    text_t *texts;
    button_t *buttons;
    npc_t *npcs;
    tile_t *tiles;
    sfEvent event;
    music_t *musics;
    event_t *my_event;
    quest_t *quest;
    float delta;
    unsigned char loading_state;
    node_button *button;
    node_img *images;
};

typedef struct node_rectangle_struct {
    int id;
    sfRectangleShape *rectangle;
    float x;
    float y;
    struct node_rectangle_struct *next;
} node_rectangle;

typedef struct editor_data editor_t;

typedef struct node_texture_struct {
    int id;
    void(*function)(editor_t *editor, sfRectangleShape *rectangle);
    struct node_texture_struct *prev;
    struct node_texture_struct *next;
} node_texture;

struct editor_data {
    sfRenderWindow *window;
    sfRectangleShape *current;
    sfRectangleShape *background;
    node_rectangle *rectangles;
    sfTexture *world;
    node_texture *textures;
    sfView *view;
    sfView *main;
    int press;
};

// display_all.c
void display_all(data_t *data);

// display_utils.c
void display_tile_depth(tile_t *start, video_t video, unsigned char depth);
void display_npc_depth(npc_t *start, video_t video, unsigned char depth);
void display_buttons(button_t *start, video_t video);
void display_texts(text_t *start, video_t video);
void display_player_depth(player_t player, video_t video, unsigned char depth);

// data_creation.c
data_t *data_delete(data_t *data);
void data_create(data_t *data);

// tiles.c
tile_t *create_tile(tile_t *start);
tile_t *delete_tile(tile_t *node);
tile_t *delete_all_tiles(tile_t *start);

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
void create_music(data_t *data, const char *path, int loop);

// npc_utils.c
npc_t *set_npc_type(npc_t *node, unsigned char type);
npc_t *set_npc_texture(npc_t *node, texture_t *texture);
npc_t *set_npc_position(npc_t *node, sfVector2f position);
npc_t *decrease_npc_hp(npc_t *node, int value);
npc_t *increase_npc_hp(npc_t *node, int value);

// npc_utils_2.c
npc_t *set_npc_max_hp(npc_t *node, int value);
npc_t *set_npc_current_hp(npc_t *node, int value);
npc_t *set_npc_to_max_hp(npc_t *node);

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

// inventory.c
inventory_t *create_inventory(inventory_t *start, char *name);
inventory_t *delete_inventory(inventory_t *node);
inventory_t *delete_whole_inventory(inventory_t *start);

// inventory_utils.c
inventory_t *set_inventory_count(inventory_t *node, unsigned int count);
inventory_t *set_inventory_texture(inventory_t *node, texture_t *texture);

// video_utils.c
void set_fps(sfRenderWindow *window, int fps, data_t *data);
video_t set_video(video_t video, int width, int height, int bpp);

#endif /* !STRUCTURES_H_ */

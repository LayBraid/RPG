/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

node_texture *init_texture4(node_texture *texture)
{
    add_next_texture(&texture, set_tree44, "tree44", 82);
    add_next_texture(&texture, set_tree45, "tree45", 83);
    add_next_texture(&texture, set_tree46, "tree46", 84);
    add_next_texture(&texture, set_tree47, "tree47", 85);
    add_next_texture(&texture, set_tree48, "tree48", 86);
    add_next_texture(&texture, set_tree51, "tree51", 89);
    add_next_texture(&texture, set_tree52, "tree52", 90);
    add_next_texture(&texture, set_tree53, "tree53", 91);
    add_next_texture(&texture, set_tree54, "tree54", 92);
    add_next_texture(&texture, set_tree55, "tree55", 93);
    add_next_texture(&texture, set_tree56, "tree56", 94);
    add_next_texture(&texture, set_tree57, "tree57", 95);
    add_next_texture(&texture, set_tree58, "tree58", 96);
    add_next_texture(&texture, set_tree61, "tree61", 99);
    add_next_texture(&texture, set_tree62, "tree62", 100);
    add_next_texture(&texture, set_tree63, "tree63", 101);
    add_next_texture(&texture, set_tree64, "tree64", 102);
    add_next_texture(&texture, set_tree65, "tree65", 103);
    add_next_texture(&texture, set_tree66, "tree66", 104);
    return init_texture5(texture);
}

node_texture *init_texture3(node_texture *texture)
{
    add_next_texture(&texture, set_tree21, "tree21", 59);
    add_next_texture(&texture, set_tree22, "tree22", 60);
    add_next_texture(&texture, set_tree23, "tree23", 61);
    add_next_texture(&texture, set_tree24, "tree24", 62);
    add_next_texture(&texture, set_tree25, "tree25", 63);
    add_next_texture(&texture, set_tree26, "tree26", 64);
    add_next_texture(&texture, set_tree27, "tree27", 65);
    add_next_texture(&texture, set_tree28, "tree28", 66);
    add_next_texture(&texture, set_tree31, "tree31", 69);
    add_next_texture(&texture, set_tree32, "tree32", 70);
    add_next_texture(&texture, set_tree33, "tree33", 71);
    add_next_texture(&texture, set_tree34, "tree34", 72);
    add_next_texture(&texture, set_tree35, "tree35", 73);
    add_next_texture(&texture, set_tree36, "tree36", 74);
    add_next_texture(&texture, set_tree37, "tree37", 75);
    add_next_texture(&texture, set_tree38, "tree38", 76);
    add_next_texture(&texture, set_tree41, "tree41", 79);
    add_next_texture(&texture, set_tree42, "tree42", 80);
    add_next_texture(&texture, set_tree43, "tree43", 81);
    return init_texture4(texture);
}

node_texture *init_texture2(node_texture *texture)
{
    add_next_texture(&texture, set_chemin7, "chemin7", 36);
    add_next_texture(&texture, set_chemin8, "chemin8", 37);
    add_next_texture(&texture, set_chemin9, "chemin9", 38);
    add_next_texture(&texture, set_tree1, "tree1", 39);
    add_next_texture(&texture, set_tree2, "tree2", 40);
    add_next_texture(&texture, set_tree3, "tree3", 41);
    add_next_texture(&texture, set_tree4, "tree4", 42);
    add_next_texture(&texture, set_tree5, "tree5", 43);
    add_next_texture(&texture, set_tree6, "tree6", 44);
    add_next_texture(&texture, set_tree7, "tree7", 45);
    add_next_texture(&texture, set_tree8, "tree8", 46);
    add_next_texture(&texture, set_tree11, "tree11", 49);
    add_next_texture(&texture, set_tree12, "tree12", 50);
    add_next_texture(&texture, set_tree13, "tree13", 51);
    add_next_texture(&texture, set_tree14, "tree14", 52);
    add_next_texture(&texture, set_tree15, "tree15", 53);
    add_next_texture(&texture, set_tree16, "tree16", 54);
    add_next_texture(&texture, set_tree17, "tree17", 55);
    add_next_texture(&texture, set_tree18, "tree18", 56);
    return init_texture3(texture);
}

node_texture *init_texture1(node_texture *texture)
{
    add_next_texture(&texture, set_entry4, "entry4", 17);
    add_next_texture(&texture, set_entry5, "entry5", 18);
    add_next_texture(&texture, set_entry6, "entry6", 19);
    add_next_texture(&texture, set_entry7, "entry7", 20);
    add_next_texture(&texture, set_entry8, "entry8", 21);
    add_next_texture(&texture, set_entry9, "entry9", 22);
    add_next_texture(&texture, set_entry10, "entry10", 23);
    add_next_texture(&texture, set_entry11, "entry11", 24);
    add_next_texture(&texture, set_entry12, "entry12", 25);
    add_next_texture(&texture, set_entry13, "entry13", 26);
    add_next_texture(&texture, set_entry14, "entry14", 27);
    add_next_texture(&texture, set_entry15, "entry15", 28);
    add_next_texture(&texture, set_entry16, "entry16", 29);
    add_next_texture(&texture, set_chemin1, "chemin1", 30);
    add_next_texture(&texture, set_chemin2, "chemin2", 31);
    add_next_texture(&texture, set_chemin3, "chemin3", 32);
    add_next_texture(&texture, set_chemin4, "chemin4", 33);
    add_next_texture(&texture, set_chemin5, "chemin5", 34);
    add_next_texture(&texture, set_chemin6, "chemin6", 35);
    return init_texture2(texture);
}

node_texture *init_textures(void)
{
    node_texture *texture = malloc(sizeof(node_texture));

    setup_first_texture(&texture, set_void, "void", 0);
    add_next_texture(&texture, set_grass, "grass", 1);
    add_next_texture(&texture, set_buisson, "buisson", 2);
    add_next_texture(&texture, set_buisson2, "buisson2", 3);
    add_next_texture(&texture, set_hole1, "hole1", 4);
    add_next_texture(&texture, set_hole2, "hole2", 5);
    add_next_texture(&texture, set_souch1, "souch1", 6);
    add_next_texture(&texture, set_souch2, "souch2", 7);
    add_next_texture(&texture, set_trefle1, "trefle1", 8);
    add_next_texture(&texture, set_trefle2, "trefle2", 9);
    add_next_texture(&texture, set_panneau1, "panneau1", 10);
    add_next_texture(&texture, set_panneau2, "panneau1", 11);
    add_next_texture(&texture, set_support, "support", 12);
    add_next_texture(&texture, set_support2, "support2", 13);
    add_next_texture(&texture, set_entry1, "entry1", 14);
    add_next_texture(&texture, set_entry2, "entry2", 15);
    add_next_texture(&texture, set_entry3, "entry3", 16);
    return init_texture1(texture);
}

/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#ifndef OUTPUT_EDITOR_H
    #define OUTPUT_EDITOR_H

    #include "structures.h"

enum Tiles {
    GRASS,
    ROAD,
};

void my_editor(char **av);

void setup_editor(editor_t *editor);

void add_rectangle(node_rectangle **node, int i, int j);

void display_rectangles(editor_t *editor);

void check_events(editor_t *editor);

void set_texture_rectangle(editor_t *editor, node_rectangle *rectangle);

node_texture *init_textures(editor_t *editor);

void add_next_texture(node_texture **node,
void (*function)(editor_t *editor, node_rectangle *rectangle));

void setup_first_texture(node_texture **node,
void (*function)(editor_t *editor, node_rectangle *rectangle));

void set_void(editor_t *editor, node_rectangle *rectangle);

void set_grass(editor_t *editor, node_rectangle *rectangle);

void set_buisson(editor_t *editor, node_rectangle *rectangle);

void set_buisson2(editor_t *editor, node_rectangle *rectangle);

void set_hole1(editor_t *editor, node_rectangle *rectangle);

void set_hole2(editor_t *editor, node_rectangle *rectangle);

void set_souch1(editor_t *editor, node_rectangle *rectangle);

void set_souch2(editor_t *editor, node_rectangle *rectangle);

void set_trefle1(editor_t *editor, node_rectangle *rectangle);

void set_trefle2(editor_t *editor, node_rectangle *rectangle);

void set_panneau1(editor_t *editor, node_rectangle *rectangle);

void set_panneau2(editor_t *editor, node_rectangle *rectangle);

void set_data(editor_t *editor);

void update_data(editor_t *editor);

void set_support(editor_t *editor, node_rectangle *rectangle);
void set_support2(editor_t *editor, node_rectangle *rectangle);
void set_entry1(editor_t *editor, node_rectangle *rectangle);
void set_entry2(editor_t *editor, node_rectangle *rectangle);
void set_entry3(editor_t *editor, node_rectangle *rectangle);
void set_entry4(editor_t *editor, node_rectangle *rectangle);
void set_entry5(editor_t *editor, node_rectangle *rectangle);
void set_entry6(editor_t *editor, node_rectangle *rectangle);
void set_entry7(editor_t *editor, node_rectangle *rectangle);
void set_entry8(editor_t *editor, node_rectangle *rectangle);
void set_entry9(editor_t *editor, node_rectangle *rectangle);
void set_entry10(editor_t *editor, node_rectangle *rectangle);
void set_entry11(editor_t *editor, node_rectangle *rectangle);
void set_entry12(editor_t *editor, node_rectangle *rectangle);
void set_entry13(editor_t *editor, node_rectangle *rectangle);
void set_entry14(editor_t *editor, node_rectangle *rectangle);
void set_entry15(editor_t *editor, node_rectangle *rectangle);
void set_entry16(editor_t *editor, node_rectangle *rectangle);
void set_chemin1(editor_t *editor, node_rectangle *rectangle);
void set_chemin2(editor_t *editor, node_rectangle *rectangle);
void set_chemin3(editor_t *editor, node_rectangle *rectangle);
void set_chemin4(editor_t *editor, node_rectangle *rectangle);
void set_chemin5(editor_t *editor, node_rectangle *rectangle);
void set_chemin6(editor_t *editor, node_rectangle *rectangle);
void set_chemin7(editor_t *editor, node_rectangle *rectangle);
void set_chemin8(editor_t *editor, node_rectangle *rectangle);
void set_chemin9(editor_t *editor, node_rectangle *rectangle);
void set_tree1(editor_t *editor, node_rectangle *rectangle);
void set_tree2(editor_t *editor, node_rectangle *rectangle);
void set_tree3(editor_t *editor, node_rectangle *rectangle);
void set_tree4(editor_t *editor, node_rectangle *rectangle);
void set_tree5(editor_t *editor, node_rectangle *rectangle);
void set_tree6(editor_t *editor, node_rectangle *rectangle);
void set_tree7(editor_t *editor, node_rectangle *rectangle);
void set_tree8(editor_t *editor, node_rectangle *rectangle);
void set_tree11(editor_t *editor, node_rectangle *rectangle);
void set_tree12(editor_t *editor, node_rectangle *rectangle);
void set_tree13(editor_t *editor, node_rectangle *rectangle);
void set_tree14(editor_t *editor, node_rectangle *rectangle);
void set_tree15(editor_t *editor, node_rectangle *rectangle);
void set_tree16(editor_t *editor, node_rectangle *rectangle);
void set_tree17(editor_t *editor, node_rectangle *rectangle);
void set_tree18(editor_t *editor, node_rectangle *rectangle);
void set_tree21(editor_t *editor, node_rectangle *rectangle);
void set_tree22(editor_t *editor, node_rectangle *rectangle);
void set_tree23(editor_t *editor, node_rectangle *rectangle);
void set_tree24(editor_t *editor, node_rectangle *rectangle);
void set_tree25(editor_t *editor, node_rectangle *rectangle);
void set_tree26(editor_t *editor, node_rectangle *rectangle);
void set_tree27(editor_t *editor, node_rectangle *rectangle);
void set_tree28(editor_t *editor, node_rectangle *rectangle);
void set_tree31(editor_t *editor, node_rectangle *rectangle);
void set_tree32(editor_t *editor, node_rectangle *rectangle);
void set_tree33(editor_t *editor, node_rectangle *rectangle);
void set_tree34(editor_t *editor, node_rectangle *rectangle);
void set_tree35(editor_t *editor, node_rectangle *rectangle);
void set_tree36(editor_t *editor, node_rectangle *rectangle);
void set_tree37(editor_t *editor, node_rectangle *rectangle);
void set_tree38(editor_t *editor, node_rectangle *rectangle);
void set_tree41(editor_t *editor, node_rectangle *rectangle);
void set_tree42(editor_t *editor, node_rectangle *rectangle);
void set_tree43(editor_t *editor, node_rectangle *rectangle);
void set_tree44(editor_t *editor, node_rectangle *rectangle);
void set_tree45(editor_t *editor, node_rectangle *rectangle);
void set_tree46(editor_t *editor, node_rectangle *rectangle);
void set_tree47(editor_t *editor, node_rectangle *rectangle);
void set_tree48(editor_t *editor, node_rectangle *rectangle);
void set_tree51(editor_t *editor, node_rectangle *rectangle);
void set_tree52(editor_t *editor, node_rectangle *rectangle);
void set_tree53(editor_t *editor, node_rectangle *rectangle);
void set_tree54(editor_t *editor, node_rectangle *rectangle);
void set_tree55(editor_t *editor, node_rectangle *rectangle);
void set_tree56(editor_t *editor, node_rectangle *rectangle);
void set_tree57(editor_t *editor, node_rectangle *rectangle);
void set_tree58(editor_t *editor, node_rectangle *rectangle);
void set_tree61(editor_t *editor, node_rectangle *rectangle);
void set_tree62(editor_t *editor, node_rectangle *rectangle);
void set_tree63(editor_t *editor, node_rectangle *rectangle);
void set_tree64(editor_t *editor, node_rectangle *rectangle);
void set_tree65(editor_t *editor, node_rectangle *rectangle);
void set_tree66(editor_t *editor, node_rectangle *rectangle);
void set_tree67(editor_t *editor, node_rectangle *rectangle);
void set_tree68(editor_t *editor, node_rectangle *rectangle);
void set_tree71(editor_t *editor, node_rectangle *rectangle);
void set_tree72(editor_t *editor, node_rectangle *rectangle);
void set_tree73(editor_t *editor, node_rectangle *rectangle);
void set_tree74(editor_t *editor, node_rectangle *rectangle);
void set_tree75(editor_t *editor, node_rectangle *rectangle);
void set_tree76(editor_t *editor, node_rectangle *rectangle);
void set_tree77(editor_t *editor, node_rectangle *rectangle);
void set_tree78(editor_t *editor, node_rectangle *rectangle);
void set_tree81(editor_t *editor, node_rectangle *rectangle);
void set_tree82(editor_t *editor, node_rectangle *rectangle);
void set_tree83(editor_t *editor, node_rectangle *rectangle);
void set_tree84(editor_t *editor, node_rectangle *rectangle);
void set_tree85(editor_t *editor, node_rectangle *rectangle);
void set_tree86(editor_t *editor, node_rectangle *rectangle);
void set_tree87(editor_t *editor, node_rectangle *rectangle);
void set_tree88(editor_t *editor, node_rectangle *rectangle);
void set_tree91(editor_t *editor, node_rectangle *rectangle);
void set_tree92(editor_t *editor, node_rectangle *rectangle);
void set_tree93(editor_t *editor, node_rectangle *rectangle);
void set_tree94(editor_t *editor, node_rectangle *rectangle);
void set_tree95(editor_t *editor, node_rectangle *rectangle);
void set_tree96(editor_t *editor, node_rectangle *rectangle);
void set_tree97(editor_t *editor, node_rectangle *rectangle);
void set_tree98(editor_t *editor, node_rectangle *rectangle);
void set_tronc1(editor_t *editor, node_rectangle *rectangle);
void set_tronc2(editor_t *editor, node_rectangle *rectangle);
void set_tronc3(editor_t *editor, node_rectangle *rectangle);
void set_tronc4(editor_t *editor, node_rectangle *rectangle);
void set_tronc5(editor_t *editor, node_rectangle *rectangle);
void set_tronc6(editor_t *editor, node_rectangle *rectangle);
void set_tronc7(editor_t *editor, node_rectangle *rectangle);
void set_tronc8(editor_t *editor, node_rectangle *rectangle);
void set_tronc9(editor_t *editor, node_rectangle *rectangle);
void set_tronc10(editor_t *editor, node_rectangle *rectangle);
void set_tronc11(editor_t *editor, node_rectangle *rectangle);
void set_tronc12(editor_t *editor, node_rectangle *rectangle);
void set_tronc13(editor_t *editor, node_rectangle *rectangle);
void set_tronc14(editor_t *editor, node_rectangle *rectangle);
void set_tronc15(editor_t *editor, node_rectangle *rectangle);
void set_tronc16(editor_t *editor, node_rectangle *rectangle);
void set_stairs1(editor_t *editor, node_rectangle *rectangle);
void set_stairs2(editor_t *editor, node_rectangle *rectangle);
void set_stairs3(editor_t *editor, node_rectangle *rectangle);
void set_stairs4(editor_t *editor, node_rectangle *rectangle);
void set_stairs5(editor_t *editor, node_rectangle *rectangle);
void set_stairs6(editor_t *editor, node_rectangle *rectangle);
void set_stairs7(editor_t *editor, node_rectangle *rectangle);
void set_stairs8(editor_t *editor, node_rectangle *rectangle);
void set_stairs9(editor_t *editor, node_rectangle *rectangle);
void set_stairs10(editor_t *editor, node_rectangle *rectangle);
void set_stairs11(editor_t *editor, node_rectangle *rectangle);
void set_stairs12(editor_t *editor, node_rectangle *rectangle);
void set_stairs13(editor_t *editor, node_rectangle *rectangle);
void set_stairs14(editor_t *editor, node_rectangle *rectangle);
void set_stairs15(editor_t *editor, node_rectangle *rectangle);
void set_stairs16(editor_t *editor, node_rectangle *rectangle);

#endif

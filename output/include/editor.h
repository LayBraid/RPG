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

void research(editor_t *editor, sfEvent event);

void draw_research(editor_t *editor);

void setup_editor(editor_t *editor);

void add_rectangle(node_rectangle **node, int i, int j);

void display_rectangles(editor_t *editor);

void check_events(editor_t *editor);

node_texture *init_textures(void);

void add_next_texture(node_texture **node,
void (*function)(sfTexture *texture, node_rectangle *rectangle), char *name,
int id_r);

void setup_first_texture(node_texture **node,
void (*function)(sfTexture *texture, node_rectangle *rectangle), char *name,
int id_r);

void set_void(sfTexture *texture, node_rectangle *rectangle);

void set_grass(sfTexture *texture, node_rectangle *rectangle);

void set_buisson(sfTexture *texture, node_rectangle *rectangle);

void set_buisson2(sfTexture *texture, node_rectangle *rectangle);

void set_hole1(sfTexture *texture, node_rectangle *rectangle);

void set_hole2(sfTexture *texture, node_rectangle *rectangle);

void set_souch1(sfTexture *texture, node_rectangle *rectangle);

void set_souch2(sfTexture *texture, node_rectangle *rectangle);

void set_trefle1(sfTexture *texture, node_rectangle *rectangle);

void set_trefle2(sfTexture *texture, node_rectangle *rectangle);

void set_panneau1(sfTexture *texture, node_rectangle *rectangle);

void set_panneau2(sfTexture *texture, node_rectangle *rectangle);

void set_data(editor_t *editor);

void update_data(editor_t *editor);

void set_souch1(sfTexture *texture, node_rectangle *rectangle);
void set_souch2(sfTexture *texture, node_rectangle *rectangle);
void set_trefle1(sfTexture *texture, node_rectangle *rectangle);
void set_trefle2(sfTexture *texture, node_rectangle *rectangle);

void set_support(sfTexture *texture, node_rectangle *rectangle);
void set_support2(sfTexture *texture, node_rectangle *rectangle);
void set_entry1(sfTexture *texture, node_rectangle *rectangle);
void set_entry2(sfTexture *texture, node_rectangle *rectangle);
void set_entry3(sfTexture *texture, node_rectangle *rectangle);
void set_entry4(sfTexture *texture, node_rectangle *rectangle);
void set_entry5(sfTexture *texture, node_rectangle *rectangle);
void set_entry6(sfTexture *texture, node_rectangle *rectangle);
void set_entry7(sfTexture *texture, node_rectangle *rectangle);
void set_entry8(sfTexture *texture, node_rectangle *rectangle);
void set_entry9(sfTexture *texture, node_rectangle *rectangle);
void set_entry10(sfTexture *texture, node_rectangle *rectangle);
void set_entry11(sfTexture *texture, node_rectangle *rectangle);
void set_entry12(sfTexture *texture, node_rectangle *rectangle);
void set_entry13(sfTexture *texture, node_rectangle *rectangle);
void set_entry14(sfTexture *texture, node_rectangle *rectangle);
void set_entry15(sfTexture *texture, node_rectangle *rectangle);
void set_entry16(sfTexture *texture, node_rectangle *rectangle);
void set_chemin1(sfTexture *texture, node_rectangle *rectangle);
void set_chemin2(sfTexture *texture, node_rectangle *rectangle);
void set_chemin3(sfTexture *texture, node_rectangle *rectangle);
void set_chemin4(sfTexture *texture, node_rectangle *rectangle);
void set_chemin5(sfTexture *texture, node_rectangle *rectangle);
void set_chemin6(sfTexture *texture, node_rectangle *rectangle);
void set_chemin7(sfTexture *texture, node_rectangle *rectangle);
void set_chemin8(sfTexture *texture, node_rectangle *rectangle);
void set_chemin9(sfTexture *texture, node_rectangle *rectangle);
void set_tree1(sfTexture *texture, node_rectangle *rectangle);
void set_tree2(sfTexture *texture, node_rectangle *rectangle);
void set_tree3(sfTexture *texture, node_rectangle *rectangle);
void set_tree4(sfTexture *texture, node_rectangle *rectangle);
void set_tree5(sfTexture *texture, node_rectangle *rectangle);
void set_tree6(sfTexture *texture, node_rectangle *rectangle);
void set_tree7(sfTexture *texture, node_rectangle *rectangle);
void set_tree8(sfTexture *texture, node_rectangle *rectangle);
void set_tree11(sfTexture *texture, node_rectangle *rectangle);
void set_tree12(sfTexture *texture, node_rectangle *rectangle);
void set_tree13(sfTexture *texture, node_rectangle *rectangle);
void set_tree14(sfTexture *texture, node_rectangle *rectangle);
void set_tree15(sfTexture *texture, node_rectangle *rectangle);
void set_tree16(sfTexture *texture, node_rectangle *rectangle);
void set_tree17(sfTexture *texture, node_rectangle *rectangle);
void set_tree18(sfTexture *texture, node_rectangle *rectangle);
void set_tree21(sfTexture *texture, node_rectangle *rectangle);
void set_tree22(sfTexture *texture, node_rectangle *rectangle);
void set_tree23(sfTexture *texture, node_rectangle *rectangle);
void set_tree24(sfTexture *texture, node_rectangle *rectangle);
void set_tree25(sfTexture *texture, node_rectangle *rectangle);
void set_tree26(sfTexture *texture, node_rectangle *rectangle);
void set_tree27(sfTexture *texture, node_rectangle *rectangle);
void set_tree28(sfTexture *texture, node_rectangle *rectangle);
void set_tree31(sfTexture *texture, node_rectangle *rectangle);
void set_tree32(sfTexture *texture, node_rectangle *rectangle);
void set_tree33(sfTexture *texture, node_rectangle *rectangle);
void set_tree34(sfTexture *texture, node_rectangle *rectangle);
void set_tree35(sfTexture *texture, node_rectangle *rectangle);
void set_tree36(sfTexture *texture, node_rectangle *rectangle);
void set_tree37(sfTexture *texture, node_rectangle *rectangle);
void set_tree38(sfTexture *texture, node_rectangle *rectangle);
void set_tree41(sfTexture *texture, node_rectangle *rectangle);
void set_tree42(sfTexture *texture, node_rectangle *rectangle);
void set_tree43(sfTexture *texture, node_rectangle *rectangle);
void set_tree44(sfTexture *texture, node_rectangle *rectangle);
void set_tree45(sfTexture *texture, node_rectangle *rectangle);
void set_tree46(sfTexture *texture, node_rectangle *rectangle);
void set_tree47(sfTexture *texture, node_rectangle *rectangle);
void set_tree48(sfTexture *texture, node_rectangle *rectangle);
void set_tree51(sfTexture *texture, node_rectangle *rectangle);
void set_tree52(sfTexture *texture, node_rectangle *rectangle);
void set_tree53(sfTexture *texture, node_rectangle *rectangle);
void set_tree54(sfTexture *texture, node_rectangle *rectangle);
void set_tree55(sfTexture *texture, node_rectangle *rectangle);
void set_tree56(sfTexture *texture, node_rectangle *rectangle);
void set_tree57(sfTexture *texture, node_rectangle *rectangle);
void set_tree58(sfTexture *texture, node_rectangle *rectangle);
void set_tree61(sfTexture *texture, node_rectangle *rectangle);
void set_tree62(sfTexture *texture, node_rectangle *rectangle);
void set_tree63(sfTexture *texture, node_rectangle *rectangle);
void set_tree64(sfTexture *texture, node_rectangle *rectangle);
void set_tree65(sfTexture *texture, node_rectangle *rectangle);
void set_tree66(sfTexture *texture, node_rectangle *rectangle);
void set_tree67(sfTexture *texture, node_rectangle *rectangle);
void set_tree68(sfTexture *texture, node_rectangle *rectangle);
void set_tree71(sfTexture *texture, node_rectangle *rectangle);
void set_tree72(sfTexture *texture, node_rectangle *rectangle);
void set_tree73(sfTexture *texture, node_rectangle *rectangle);
void set_tree74(sfTexture *texture, node_rectangle *rectangle);
void set_tree75(sfTexture *texture, node_rectangle *rectangle);
void set_tree76(sfTexture *texture, node_rectangle *rectangle);
void set_tree77(sfTexture *texture, node_rectangle *rectangle);
void set_tree78(sfTexture *texture, node_rectangle *rectangle);
void set_tree81(sfTexture *texture, node_rectangle *rectangle);
void set_tree82(sfTexture *texture, node_rectangle *rectangle);
void set_tree83(sfTexture *texture, node_rectangle *rectangle);
void set_tree84(sfTexture *texture, node_rectangle *rectangle);
void set_tree85(sfTexture *texture, node_rectangle *rectangle);
void set_tree86(sfTexture *texture, node_rectangle *rectangle);
void set_tree87(sfTexture *texture, node_rectangle *rectangle);
void set_tree88(sfTexture *texture, node_rectangle *rectangle);
void set_tree91(sfTexture *texture, node_rectangle *rectangle);
void set_tree92(sfTexture *texture, node_rectangle *rectangle);
void set_tree93(sfTexture *texture, node_rectangle *rectangle);
void set_tree94(sfTexture *texture, node_rectangle *rectangle);
void set_tree95(sfTexture *texture, node_rectangle *rectangle);
void set_tree96(sfTexture *texture, node_rectangle *rectangle);
void set_tree97(sfTexture *texture, node_rectangle *rectangle);
void set_tree98(sfTexture *texture, node_rectangle *rectangle);
void set_tronc1(sfTexture *texture, node_rectangle *rectangle);
void set_tronc2(sfTexture *texture, node_rectangle *rectangle);
void set_tronc3(sfTexture *texture, node_rectangle *rectangle);
void set_tronc4(sfTexture *texture, node_rectangle *rectangle);
void set_tronc5(sfTexture *texture, node_rectangle *rectangle);
void set_tronc6(sfTexture *texture, node_rectangle *rectangle);
void set_tronc7(sfTexture *texture, node_rectangle *rectangle);
void set_tronc8(sfTexture *texture, node_rectangle *rectangle);
void set_tronc9(sfTexture *texture, node_rectangle *rectangle);
void set_tronc10(sfTexture *texture, node_rectangle *rectangle);
void set_tronc11(sfTexture *texture, node_rectangle *rectangle);
void set_tronc12(sfTexture *texture, node_rectangle *rectangle);
void set_tronc13(sfTexture *texture, node_rectangle *rectangle);
void set_tronc14(sfTexture *texture, node_rectangle *rectangle);
void set_tronc15(sfTexture *texture, node_rectangle *rectangle);
void set_tronc16(sfTexture *texture, node_rectangle *rectangle);
void set_stairs1(sfTexture *texture, node_rectangle *rectangle);
void set_stairs2(sfTexture *texture, node_rectangle *rectangle);
void set_stairs3(sfTexture *texture, node_rectangle *rectangle);
void set_stairs4(sfTexture *texture, node_rectangle *rectangle);
void set_stairs5(sfTexture *texture, node_rectangle *rectangle);
void set_stairs6(sfTexture *texture, node_rectangle *rectangle);
void set_stairs7(sfTexture *texture, node_rectangle *rectangle);
void set_stairs8(sfTexture *texture, node_rectangle *rectangle);
void set_stairs9(sfTexture *texture, node_rectangle *rectangle);
void set_stairs10(sfTexture *texture, node_rectangle *rectangle);
void set_stairs11(sfTexture *texture, node_rectangle *rectangle);
void set_stairs12(sfTexture *texture, node_rectangle *rectangle);
void set_stairs13(sfTexture *texture, node_rectangle *rectangle);
void set_stairs14(sfTexture *texture, node_rectangle *rectangle);
void set_stairs15(sfTexture *texture, node_rectangle *rectangle);
void set_stairs16(sfTexture *texture, node_rectangle *rectangle);
void set_house0_0(sfTexture *texture, node_rectangle *rectangle);
void set_house0_1(sfTexture *texture, node_rectangle *rectangle);
void set_house0_2(sfTexture *texture, node_rectangle *rectangle);
void set_house0_3(sfTexture *texture, node_rectangle *rectangle);
void set_house0_4(sfTexture *texture, node_rectangle *rectangle);
void set_house0_5(sfTexture *texture, node_rectangle *rectangle);
void set_house0_6(sfTexture *texture, node_rectangle *rectangle);
void set_house0_7(sfTexture *texture, node_rectangle *rectangle);
void set_house0_8(sfTexture *texture, node_rectangle *rectangle);
void set_house0_9(sfTexture *texture, node_rectangle *rectangle);
void set_house0_10(sfTexture *texture, node_rectangle *rectangle);
void set_house0_11(sfTexture *texture, node_rectangle *rectangle);
void set_house1_0(sfTexture *texture, node_rectangle *rectangle);
void set_house1_1(sfTexture *texture, node_rectangle *rectangle);
void set_house1_2(sfTexture *texture, node_rectangle *rectangle);
void set_house1_3(sfTexture *texture, node_rectangle *rectangle);
void set_house1_4(sfTexture *texture, node_rectangle *rectangle);
void set_house1_5(sfTexture *texture, node_rectangle *rectangle);
void set_house1_6(sfTexture *texture, node_rectangle *rectangle);
void set_house1_7(sfTexture *texture, node_rectangle *rectangle);
void set_house1_8(sfTexture *texture, node_rectangle *rectangle);
void set_house1_9(sfTexture *texture, node_rectangle *rectangle);
void set_house1_10(sfTexture *texture, node_rectangle *rectangle);
void set_house1_11(sfTexture *texture, node_rectangle *rectangle);
void set_house2_0(sfTexture *texture, node_rectangle *rectangle);
void set_house2_1(sfTexture *texture, node_rectangle *rectangle);
void set_house2_2(sfTexture *texture, node_rectangle *rectangle);
void set_house2_3(sfTexture *texture, node_rectangle *rectangle);
void set_house2_4(sfTexture *texture, node_rectangle *rectangle);
void set_house2_5(sfTexture *texture, node_rectangle *rectangle);
void set_house2_6(sfTexture *texture, node_rectangle *rectangle);
void set_house2_7(sfTexture *texture, node_rectangle *rectangle);
void set_house2_8(sfTexture *texture, node_rectangle *rectangle);
void set_house2_9(sfTexture *texture, node_rectangle *rectangle);
void set_house2_10(sfTexture *texture, node_rectangle *rectangle);
void set_house2_11(sfTexture *texture, node_rectangle *rectangle);
void set_house3_0(sfTexture *texture, node_rectangle *rectangle);
void set_house3_1(sfTexture *texture, node_rectangle *rectangle);
void set_house3_2(sfTexture *texture, node_rectangle *rectangle);
void set_house3_3(sfTexture *texture, node_rectangle *rectangle);
void set_house3_4(sfTexture *texture, node_rectangle *rectangle);
void set_house3_5(sfTexture *texture, node_rectangle *rectangle);
void set_house3_6(sfTexture *texture, node_rectangle *rectangle);
void set_house3_7(sfTexture *texture, node_rectangle *rectangle);
void set_house3_8(sfTexture *texture, node_rectangle *rectangle);
void set_house3_9(sfTexture *texture, node_rectangle *rectangle);
void set_house3_10(sfTexture *texture, node_rectangle *rectangle);
void set_house3_11(sfTexture *texture, node_rectangle *rectangle);
void set_house4_0(sfTexture *texture, node_rectangle *rectangle);
void set_house4_1(sfTexture *texture, node_rectangle *rectangle);
void set_house4_2(sfTexture *texture, node_rectangle *rectangle);
void set_house4_3(sfTexture *texture, node_rectangle *rectangle);
void set_house4_4(sfTexture *texture, node_rectangle *rectangle);
void set_house4_5(sfTexture *texture, node_rectangle *rectangle);
void set_house4_6(sfTexture *texture, node_rectangle *rectangle);
void set_house4_7(sfTexture *texture, node_rectangle *rectangle);
void set_house4_8(sfTexture *texture, node_rectangle *rectangle);
void set_house4_9(sfTexture *texture, node_rectangle *rectangle);
void set_house4_10(sfTexture *texture, node_rectangle *rectangle);
void set_house4_11(sfTexture *texture, node_rectangle *rectangle);
void set_house5_0(sfTexture *texture, node_rectangle *rectangle);
void set_house5_1(sfTexture *texture, node_rectangle *rectangle);
void set_house5_2(sfTexture *texture, node_rectangle *rectangle);
void set_house5_3(sfTexture *texture, node_rectangle *rectangle);
void set_house5_4(sfTexture *texture, node_rectangle *rectangle);
void set_house5_5(sfTexture *texture, node_rectangle *rectangle);
void set_house5_6(sfTexture *texture, node_rectangle *rectangle);
void set_house5_7(sfTexture *texture, node_rectangle *rectangle);
void set_house5_8(sfTexture *texture, node_rectangle *rectangle);
void set_house5_9(sfTexture *texture, node_rectangle *rectangle);
void set_house5_10(sfTexture *texture, node_rectangle *rectangle);
void set_house5_11(sfTexture *texture, node_rectangle *rectangle);
void set_house6_0(sfTexture *texture, node_rectangle *rectangle);
void set_house6_1(sfTexture *texture, node_rectangle *rectangle);
void set_house6_2(sfTexture *texture, node_rectangle *rectangle);
void set_house6_3(sfTexture *texture, node_rectangle *rectangle);
void set_house6_4(sfTexture *texture, node_rectangle *rectangle);
void set_house6_5(sfTexture *texture, node_rectangle *rectangle);
void set_house6_6(sfTexture *texture, node_rectangle *rectangle);
void set_house6_7(sfTexture *texture, node_rectangle *rectangle);
void set_house6_8(sfTexture *texture, node_rectangle *rectangle);
void set_house6_9(sfTexture *texture, node_rectangle *rectangle);
void set_house6_10(sfTexture *texture, node_rectangle *rectangle);
void set_house6_11(sfTexture *texture, node_rectangle *rectangle);
void set_house7_0(sfTexture *texture, node_rectangle *rectangle);
void set_house7_1(sfTexture *texture, node_rectangle *rectangle);
void set_house7_2(sfTexture *texture, node_rectangle *rectangle);
void set_house7_3(sfTexture *texture, node_rectangle *rectangle);
void set_house7_4(sfTexture *texture, node_rectangle *rectangle);
void set_house7_5(sfTexture *texture, node_rectangle *rectangle);
void set_house7_6(sfTexture *texture, node_rectangle *rectangle);
void set_house7_7(sfTexture *texture, node_rectangle *rectangle);
void set_house7_8(sfTexture *texture, node_rectangle *rectangle);
void set_house7_9(sfTexture *texture, node_rectangle *rectangle);
void set_house7_10(sfTexture *texture, node_rectangle *rectangle);
void set_house7_11(sfTexture *texture, node_rectangle *rectangle);
void set_house8_0(sfTexture *texture, node_rectangle *rectangle);
void set_house8_1(sfTexture *texture, node_rectangle *rectangle);
void set_house8_2(sfTexture *texture, node_rectangle *rectangle);
void set_house8_3(sfTexture *texture, node_rectangle *rectangle);
void set_house8_4(sfTexture *texture, node_rectangle *rectangle);
void set_house8_5(sfTexture *texture, node_rectangle *rectangle);
void set_house8_6(sfTexture *texture, node_rectangle *rectangle);
void set_house8_7(sfTexture *texture, node_rectangle *rectangle);
void set_house8_8(sfTexture *texture, node_rectangle *rectangle);
void set_house8_9(sfTexture *texture, node_rectangle *rectangle);
void set_house8_10(sfTexture *texture, node_rectangle *rectangle);
void set_house8_11(sfTexture *texture, node_rectangle *rectangle);
void set_house9_0(sfTexture *texture, node_rectangle *rectangle);
void set_house9_1(sfTexture *texture, node_rectangle *rectangle);
void set_house9_2(sfTexture *texture, node_rectangle *rectangle);
void set_house9_3(sfTexture *texture, node_rectangle *rectangle);
void set_house9_4(sfTexture *texture, node_rectangle *rectangle);
void set_house9_5(sfTexture *texture, node_rectangle *rectangle);
void set_house9_6(sfTexture *texture, node_rectangle *rectangle);
void set_house9_7(sfTexture *texture, node_rectangle *rectangle);
void set_house9_8(sfTexture *texture, node_rectangle *rectangle);
void set_house9_9(sfTexture *texture, node_rectangle *rectangle);
void set_house9_10(sfTexture *texture, node_rectangle *rectangle);
void set_house9_11(sfTexture *texture, node_rectangle *rectangle);
#endif

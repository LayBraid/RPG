/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

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
    add_next_texture(&texture, set_tree67, "tree67", 105);
    add_next_texture(&texture, set_tree68, "tree68", 106);
    add_next_texture(&texture, set_tree71, "tree71", 109);
    add_next_texture(&texture, set_tree72, "tree72", 110);
    add_next_texture(&texture, set_tree73, "tree73", 111);
    add_next_texture(&texture, set_tree74, "tree74", 112);
    add_next_texture(&texture, set_tree75, "tree75", 113);
    add_next_texture(&texture, set_tree76, "tree76", 114);
    add_next_texture(&texture, set_tree77, "tree77", 115);
    add_next_texture(&texture, set_tree78, "tree78", 116);
    add_next_texture(&texture, set_tree81, "tree81", 119);
    add_next_texture(&texture, set_tree82, "tree82", 120);
    add_next_texture(&texture, set_tree83, "tree83", 121);
    add_next_texture(&texture, set_tree84, "tree84", 122);
    add_next_texture(&texture, set_tree85, "tree85", 123);
    add_next_texture(&texture, set_tree86, "tree86", 124);
    add_next_texture(&texture, set_tree87, "tree87", 125);
    add_next_texture(&texture, set_tree88, "tree88", 126);
    add_next_texture(&texture, set_tree91, "tree91", 129);
    add_next_texture(&texture, set_tree92, "tree92", 130);
    add_next_texture(&texture, set_tree93, "tree93", 131);
    add_next_texture(&texture, set_tree94, "tree94", 132);
    add_next_texture(&texture, set_tree95, "tree95", 133);
    add_next_texture(&texture, set_tree96, "tree96", 134);
    add_next_texture(&texture, set_tree97, "tree97", 135);
    add_next_texture(&texture, set_tree98, "tree98", 136);
    add_next_texture(&texture, set_tronc1, "tronc1", 137);
    add_next_texture(&texture, set_tronc2, "tronc2", 138);
    add_next_texture(&texture, set_tronc3, "tronc3", 139);
    add_next_texture(&texture, set_tronc4, "tronc4", 140);
    add_next_texture(&texture, set_tronc5, "tronc5", 141);
    add_next_texture(&texture, set_tronc6, "tronc6", 142);
    add_next_texture(&texture, set_tronc7, "tronc7", 143);
    add_next_texture(&texture, set_tronc8, "tronc8", 144);
    add_next_texture(&texture, set_tronc9, "tronc9", 145);
    add_next_texture(&texture, set_tronc10, "tronc10", 146);
    add_next_texture(&texture, set_tronc11, "tronc11", 147);
    add_next_texture(&texture, set_tronc12, "tronc12", 148);
    add_next_texture(&texture, set_tronc13, "tronc13", 149);
    add_next_texture(&texture, set_tronc14, "tronc14", 150);
    add_next_texture(&texture, set_tronc15, "tronc15", 151);
    add_next_texture(&texture, set_tronc16, "tronc16", 152);
    add_next_texture(&texture, set_stairs1, "stairs1", 153);
    add_next_texture(&texture, set_stairs2, "stairs2", 154);
    add_next_texture(&texture, set_stairs3, "stairs3", 155);
    add_next_texture(&texture, set_stairs4, "stairs4", 156);
    add_next_texture(&texture, set_stairs5, "stairs5", 157);
    add_next_texture(&texture, set_stairs6, "stairs6", 158);
    add_next_texture(&texture, set_stairs7, "stairs7", 159);
    add_next_texture(&texture, set_stairs8, "stairs8", 160);
    add_next_texture(&texture, set_stairs9, "stairs9", 161);
    add_next_texture(&texture, set_stairs10, "stairs10", 162);
    add_next_texture(&texture, set_stairs11, "stairs11", 163);
    add_next_texture(&texture, set_stairs12, "stairs12", 164);
    add_next_texture(&texture, set_stairs13, "stairs13", 165);
    add_next_texture(&texture, set_stairs14, "stairs14", 166);
    add_next_texture(&texture, set_stairs15, "stairs15", 167);
    add_next_texture(&texture, set_stairs16, "stairs16", 168);
    add_next_texture(&texture, set_house0_0, "house0_0",169);
    add_next_texture(&texture, set_house0_1, "house0_1",170);
    add_next_texture(&texture, set_house0_2, "house0_2",171);
    add_next_texture(&texture, set_house0_3, "house0_3",172);
    add_next_texture(&texture, set_house0_4, "house0_4",173);
    add_next_texture(&texture, set_house0_5, "house0_5",174);
    add_next_texture(&texture, set_house0_6, "house0_6",175);
    add_next_texture(&texture, set_house0_7, "house0_7",176);
    add_next_texture(&texture, set_house0_8, "house0_8",177);
    add_next_texture(&texture, set_house0_9, "house0_9",178);
    add_next_texture(&texture, set_house0_10, "house0_10",179);
    add_next_texture(&texture, set_house0_11, "house0_11",180);
    add_next_texture(&texture, set_house1_0, "house1_0",270);
    add_next_texture(&texture, set_house1_1, "house1_1",271);
    add_next_texture(&texture, set_house1_2, "house1_2",181);
    add_next_texture(&texture, set_house1_3, "house1_3",182);
    add_next_texture(&texture, set_house1_4, "house1_4",183);
    add_next_texture(&texture, set_house1_5, "house1_5",184);
    add_next_texture(&texture, set_house1_6, "house1_6",185);
    add_next_texture(&texture, set_house1_7, "house1_7",186);
    add_next_texture(&texture, set_house1_8, "house1_8",187);
    add_next_texture(&texture, set_house1_9, "house1_9",188);
    add_next_texture(&texture, set_house1_10, "house1_10",189);
    add_next_texture(&texture, set_house1_11, "house1_11",190);
    add_next_texture(&texture, set_house2_0, "house2_0",272);
    add_next_texture(&texture, set_house2_1, "house2_1",273);
    add_next_texture(&texture, set_house2_2, "house2_2",191);
    add_next_texture(&texture, set_house2_3, "house2_3",192);
    add_next_texture(&texture, set_house2_4, "house2_4",193);
    add_next_texture(&texture, set_house2_5, "house2_5",194);
    add_next_texture(&texture, set_house2_6, "house2_6",195);
    add_next_texture(&texture, set_house2_7, "house2_7",196);
    add_next_texture(&texture, set_house2_8, "house2_8",197);
    add_next_texture(&texture, set_house2_9, "house2_9",198);
    add_next_texture(&texture, set_house2_10, "house2_10",199);
    add_next_texture(&texture, set_house2_11, "house2_11",200);
    add_next_texture(&texture, set_house3_0, "house3_0",274);
    add_next_texture(&texture, set_house3_1, "house3_1",275);
    add_next_texture(&texture, set_house3_2, "house3_2",201);
    add_next_texture(&texture, set_house3_3, "house3_3",202);
    add_next_texture(&texture, set_house3_4, "house3_4",203);
    add_next_texture(&texture, set_house3_5, "house3_5",204);
    add_next_texture(&texture, set_house3_6, "house3_6",205);
    add_next_texture(&texture, set_house3_7, "house3_7",206);
    add_next_texture(&texture, set_house3_8, "house3_8",207);
    add_next_texture(&texture, set_house3_9, "house3_9",208);
    add_next_texture(&texture, set_house3_10, "house3_10",209);
    add_next_texture(&texture, set_house3_11, "house3_11",210);
    add_next_texture(&texture, set_house4_0, "house4_0",276);
    add_next_texture(&texture, set_house4_1, "house4_1",277);
    add_next_texture(&texture, set_house4_2, "house4_2",211);
    add_next_texture(&texture, set_house4_3, "house4_3",212);
    add_next_texture(&texture, set_house4_4, "house4_4",213);
    add_next_texture(&texture, set_house4_5, "house4_5",214);
    add_next_texture(&texture, set_house4_6, "house4_6",215);
    add_next_texture(&texture, set_house4_7, "house4_7",216);
    add_next_texture(&texture, set_house4_8, "house4_8",217);
    add_next_texture(&texture, set_house4_9, "house4_9",218);
    add_next_texture(&texture, set_house4_10, "house4_10",219);
    add_next_texture(&texture, set_house4_11, "house4_11",220);
    add_next_texture(&texture, set_house5_0, "house5_0",278);
    add_next_texture(&texture, set_house5_1, "house5_1",279);
    add_next_texture(&texture, set_house5_2, "house5_2",221);
    add_next_texture(&texture, set_house5_3, "house5_3",222);
    add_next_texture(&texture, set_house5_4, "house5_4",223);
    add_next_texture(&texture, set_house5_5, "house5_5",224);
    add_next_texture(&texture, set_house5_6, "house5_6",225);
    add_next_texture(&texture, set_house5_7, "house5_7",226);
    add_next_texture(&texture, set_house5_8, "house5_8",227);
    add_next_texture(&texture, set_house5_9, "house5_9",228);
    add_next_texture(&texture, set_house5_10, "house5_10",229);
    add_next_texture(&texture, set_house5_11, "house5_11",230);
    add_next_texture(&texture, set_house6_0, "house6_0",280);
    add_next_texture(&texture, set_house6_1, "house6_1",281);
    add_next_texture(&texture, set_house6_2, "house6_2",231);
    add_next_texture(&texture, set_house6_3, "house6_3",232);
    add_next_texture(&texture, set_house6_4, "house6_4",233);
    add_next_texture(&texture, set_house6_5, "house6_5",234);
    add_next_texture(&texture, set_house6_6, "house6_6",235);
    add_next_texture(&texture, set_house6_7, "house6_7",236);
    add_next_texture(&texture, set_house6_8, "house6_8",237);
    add_next_texture(&texture, set_house6_9, "house6_9",238);
    add_next_texture(&texture, set_house6_10, "house6_10",239);
    add_next_texture(&texture, set_house6_11, "house6_11",240);
    add_next_texture(&texture, set_house7_0, "house7_0",282);
    add_next_texture(&texture, set_house7_1, "house7_1",283);
    add_next_texture(&texture, set_house7_2, "house7_2",241);
    add_next_texture(&texture, set_house7_3, "house7_3",242);
    add_next_texture(&texture, set_house7_4, "house7_4",243);
    add_next_texture(&texture, set_house7_5, "house7_5",244);
    add_next_texture(&texture, set_house7_6, "house7_6",245);
    add_next_texture(&texture, set_house7_7, "house7_7",246);
    add_next_texture(&texture, set_house7_8, "house7_8",247);
    add_next_texture(&texture, set_house7_9, "house7_9",248);
    add_next_texture(&texture, set_house7_10, "house7_10",249);
    add_next_texture(&texture, set_house7_11, "house7_11",250);
    add_next_texture(&texture, set_house8_0, "house8_0",284);
    add_next_texture(&texture, set_house8_1, "house8_1",285);
    add_next_texture(&texture, set_house8_2, "house8_2",251);
    add_next_texture(&texture, set_house8_3, "house8_3",252);
    add_next_texture(&texture, set_house8_4, "house8_4",253);
    add_next_texture(&texture, set_house8_5, "house8_5",254);
    add_next_texture(&texture, set_house8_6, "house8_6",255);
    add_next_texture(&texture, set_house8_7, "house8_7",256);
    add_next_texture(&texture, set_house8_8, "house8_8",257);
    add_next_texture(&texture, set_house8_9, "house8_9",258);
    add_next_texture(&texture, set_house8_10, "house8_10",259);
    add_next_texture(&texture, set_house8_11, "house8_11",260);
    add_next_texture(&texture, set_house9_0, "house9_0",286);
    add_next_texture(&texture, set_house9_1, "house9_1",287);
    add_next_texture(&texture, set_house9_2, "house9_2",261);
    add_next_texture(&texture, set_house9_3, "house9_3",262);
    add_next_texture(&texture, set_house9_4, "house9_4",263);
    add_next_texture(&texture, set_house9_5, "house9_5",264);
    add_next_texture(&texture, set_house9_6, "house9_6",265);
    add_next_texture(&texture, set_house9_7, "house9_7",266);
    add_next_texture(&texture, set_house9_8, "house9_8",267);
    add_next_texture(&texture, set_house9_9, "house9_9",268);
    add_next_texture(&texture, set_house9_10, "house9_10",269);
    add_next_texture(&texture, set_house9_11, "house9_11",288);
    add_next_texture(&texture, set_poteau0_0, "poteau0_0",290);
    add_next_texture(&texture, set_poteau1_0, "poteau1_0",292);
    add_next_texture(&texture, set_poteau, "poteau",293);
    add_next_texture(&texture, set_poteau20_0, "poteau20_0",294);
    add_next_texture(&texture, set_poteau21_0, "poteau21_0",296);
    add_next_texture(&texture, set_eau_base, "eau_base",297);
    add_next_texture(&texture, set_water_edge0_0, "water_edge0_0",298);
    add_next_texture(&texture, set_water_edge0_1, "water_edge0_1",299);
    add_next_texture(&texture, set_water_edge0_2, "water_edge0_2",300);
    add_next_texture(&texture, set_water_edge0_3, "water_edge0_3",301);
    add_next_texture(&texture, set_caves_entry0_0, "caves_entry0_0",302);
    add_next_texture(&texture, set_caves_entry0_1, "caves_entry0_1",303);
    add_next_texture(&texture, set_caves_entry1_0, "caves_entry1_0",308);
    add_next_texture(&texture, set_caves_entry1_1, "caves_entry1_1",309);
    add_next_texture(&texture, set_caves_entry2_0, "caves_entry2_0",314);
    add_next_texture(&texture, set_caves_entry2_1, "caves_entry2_1",315);
    add_next_texture(&texture, set_caves_entry3_0, "caves_entry3_0",320);
    add_next_texture(&texture, set_caves_entry3_1, "caves_entry3_1",321);
    add_next_texture(&texture, set_caves_entry4_0, "caves_entry4_0",326);
    add_next_texture(&texture, set_caves_entry4_1, "caves_entry4_1",327);
    add_next_texture(&texture, set_caves_entry5_0, "caves_entry5_0",332);
    add_next_texture(&texture, set_caves_entry5_1, "caves_entry5_1",333);
    add_next_texture(&texture, set_caves_entry20_0, "caves_entry20_0",334);
    add_next_texture(&texture, set_caves_entry20_1, "caves_entry20_1",335);
    add_next_texture(&texture, set_caves_entry20_2, "caves_entry20_2",336);
    add_next_texture(&texture, set_caves_entry20_3, "caves_entry20_3",337);
    add_next_texture(&texture, set_caves_entry20_4, "caves_entry20_4",338);
    add_next_texture(&texture, set_caves_entry20_5, "caves_entry20_5",339);
    add_next_texture(&texture, set_caves_entry21_0, "caves_entry21_0",336);
    add_next_texture(&texture, set_caves_entry21_1, "caves_entry21_1",337);
    add_next_texture(&texture, set_caves_entry21_2, "caves_entry21_2",338);
    add_next_texture(&texture, set_caves_entry21_3, "caves_entry21_3",339);
    add_next_texture(&texture, set_caves_entry21_4, "caves_entry21_4",340);
    add_next_texture(&texture, set_caves_entry21_5, "caves_entry21_5",341);
    add_next_texture(&texture, set_caves_entry30_0, "caves_entry30_0",342);
    add_next_texture(&texture, set_caves_entry30_1, "caves_entry30_1",343);
    add_next_texture(&texture, set_caves_entry31_0, "caves_entry31_0",348);
    add_next_texture(&texture, set_caves_entry31_1, "caves_entry31_1",349);
    add_next_texture(&texture, set_caves_entry32_0, "caves_entry32_0",354);
    add_next_texture(&texture, set_caves_entry32_1, "caves_entry32_1",355);
    add_next_texture(&texture, set_caves_entry33_0, "caves_entry33_0",360);
    add_next_texture(&texture, set_caves_entry33_1, "caves_entry33_1",361);
    add_next_texture(&texture, set_caves_entry34_0, "caves_entry34_0",366);
    add_next_texture(&texture, set_caves_entry34_1, "caves_entry34_1",367);
    add_next_texture(&texture, set_caves_entry35_0, "caves_entry35_0",372);
    add_next_texture(&texture, set_caves_entry35_1, "caves_entry35_1",373);
    add_next_texture(&texture, set_caves_entry40_0, "caves_entry40_0",374);
    add_next_texture(&texture, set_caves_entry40_1, "caves_entry40_1",375);
    add_next_texture(&texture, set_caves_entry40_2, "caves_entry40_2",376);
    add_next_texture(&texture, set_caves_entry40_3, "caves_entry40_3",377);
    add_next_texture(&texture, set_caves_entry40_4, "caves_entry40_4",378);
    add_next_texture(&texture, set_caves_entry40_5, "caves_entry40_5",379);
    add_next_texture(&texture, set_caves_entry41_0, "caves_entry41_0",464);
    add_next_texture(&texture, set_caves_entry41_1, "caves_entry41_1",465);
    add_next_texture(&texture, set_caves_entry41_2, "caves_entry41_2",466);
    add_next_texture(&texture, set_caves_entry41_3, "caves_entry41_3",467);
    add_next_texture(&texture, set_caves_entry41_4, "caves_entry41_4",380);
    add_next_texture(&texture, set_caves_entry41_5, "caves_entry41_5",381);
    add_next_texture(&texture, set_enter_cave0_0, "enter_cave0_0",382);
    add_next_texture(&texture, set_enter_cave0_1, "enter_cave0_1",383);
    add_next_texture(&texture, set_enter_cave0_2, "enter_cave0_2",384);
    add_next_texture(&texture, set_enter_cave0_3, "enter_cave0_3",385);
    add_next_texture(&texture, set_enter_cave0_4, "enter_cave0_4",386);
    add_next_texture(&texture, set_enter_cave1_0, "enter_cave1_0",386);
    add_next_texture(&texture, set_enter_cave1_1, "enter_cave1_1",387);
    add_next_texture(&texture, set_enter_cave1_2, "enter_cave1_2",388);
    add_next_texture(&texture, set_enter_cave1_3, "enter_cave1_3",389);
    add_next_texture(&texture, set_enter_cave1_4, "enter_cave1_4",390);
    add_next_texture(&texture, set_enter_cave2_0, "enter_cave2_0",390);
    add_next_texture(&texture, set_enter_cave2_1, "enter_cave2_1",391);
    add_next_texture(&texture, set_enter_cave2_2, "enter_cave2_2",392);
    add_next_texture(&texture, set_enter_cave2_3, "enter_cave2_3",393);
    add_next_texture(&texture, set_enter_cave2_4, "enter_cave2_4",394);
    add_next_texture(&texture, set_enter_cave3_0, "enter_cave3_0",394);
    add_next_texture(&texture, set_enter_cave3_1, "enter_cave3_1",395);
    add_next_texture(&texture, set_enter_cave3_2, "enter_cave3_2",396);
    add_next_texture(&texture, set_enter_cave3_3, "enter_cave3_3",397);
    add_next_texture(&texture, set_enter_cave3_4, "enter_cave3_4",398);
    add_next_texture(&texture, set_enter_cave20_0, "enter_cave20_0",399);
    add_next_texture(&texture, set_enter_cave20_1, "enter_cave20_1",400);
    add_next_texture(&texture, set_enter_cave20_2, "enter_cave20_2",401);
    add_next_texture(&texture, set_enter_cave20_3, "enter_cave20_3",402);
    add_next_texture(&texture, set_enter_cave21_0, "enter_cave21_0",404);
    add_next_texture(&texture, set_enter_cave21_1, "enter_cave21_1",405);
    add_next_texture(&texture, set_enter_cave21_2, "enter_cave21_2",406);
    add_next_texture(&texture, set_enter_cave21_3, "enter_cave21_3",407);
    add_next_texture(&texture, set_enter_cave22_0, "enter_cave22_0",409);
    add_next_texture(&texture, set_enter_cave22_1, "enter_cave22_1",410);
    add_next_texture(&texture, set_enter_cave22_2, "enter_cave22_2",411);
    add_next_texture(&texture, set_enter_cave22_3, "enter_cave22_3",412);
    add_next_texture(&texture, set_enter_cave23_0, "enter_cave23_0",414);
    add_next_texture(&texture, set_enter_cave23_1, "enter_cave23_1",415);
    add_next_texture(&texture, set_enter_cave23_2, "enter_cave23_2",416);
    add_next_texture(&texture, set_enter_cave23_3, "enter_cave23_3",417);
    add_next_texture(&texture, set_enter_cave24_0, "enter_cave24_0",419);
    add_next_texture(&texture, set_enter_cave24_1, "enter_cave24_1",420);
    add_next_texture(&texture, set_enter_cave24_2, "enter_cave24_2",421);
    add_next_texture(&texture, set_enter_cave24_3, "enter_cave24_3",422);
    add_next_texture(&texture, set_enter_cave30_0, "enter_cave30_0",423);
    add_next_texture(&texture, set_enter_cave30_1, "enter_cave30_1",424);
    add_next_texture(&texture, set_enter_cave30_2, "enter_cave30_2",425);
    add_next_texture(&texture, set_enter_cave30_3, "enter_cave30_3",426);
    add_next_texture(&texture, set_enter_cave30_4, "enter_cave30_4",427);
    add_next_texture(&texture, set_enter_cave31_0, "enter_cave31_0",427);
    add_next_texture(&texture, set_enter_cave31_1, "enter_cave31_1",428);
    add_next_texture(&texture, set_enter_cave31_2, "enter_cave31_2",429);
    add_next_texture(&texture, set_enter_cave31_3, "enter_cave31_3",430);
    add_next_texture(&texture, set_enter_cave31_4, "enter_cave31_4",431);
    add_next_texture(&texture, set_enter_cave32_0, "enter_cave32_0",431);
    add_next_texture(&texture, set_enter_cave32_1, "enter_cave32_1",432);
    add_next_texture(&texture, set_enter_cave32_2, "enter_cave32_2",433);
    add_next_texture(&texture, set_enter_cave32_3, "enter_cave32_3",434);
    add_next_texture(&texture, set_enter_cave32_4, "enter_cave32_4",435);
    add_next_texture(&texture, set_enter_cave33_0, "enter_cave33_0",435);
    add_next_texture(&texture, set_enter_cave33_1, "enter_cave33_1",436);
    add_next_texture(&texture, set_enter_cave33_2, "enter_cave33_2",437);
    add_next_texture(&texture, set_enter_cave33_3, "enter_cave33_3",438);
    add_next_texture(&texture, set_enter_cave33_4, "enter_cave33_4",439);
    add_next_texture(&texture, set_enter_cave40_0, "enter_cave40_0",440);
    add_next_texture(&texture, set_enter_cave40_1, "enter_cave40_1",441);
    add_next_texture(&texture, set_enter_cave40_2, "enter_cave40_2",442);
    add_next_texture(&texture, set_enter_cave40_3, "enter_cave40_3",443);
    add_next_texture(&texture, set_enter_cave41_0, "enter_cave41_0",445);
    add_next_texture(&texture, set_enter_cave41_1, "enter_cave41_1",446);
    add_next_texture(&texture, set_enter_cave41_2, "enter_cave41_2",447);
    add_next_texture(&texture, set_enter_cave41_3, "enter_cave41_3",448);
    add_next_texture(&texture, set_enter_cave42_0, "enter_cave42_0",450);
    add_next_texture(&texture, set_enter_cave42_1, "enter_cave42_1",451);
    add_next_texture(&texture, set_enter_cave42_2, "enter_cave42_2",452);
    add_next_texture(&texture, set_enter_cave42_3, "enter_cave42_3",453);
    add_next_texture(&texture, set_enter_cave43_0, "enter_cave43_0",455);
    add_next_texture(&texture, set_enter_cave43_1, "enter_cave43_1",456);
    add_next_texture(&texture, set_enter_cave43_2, "enter_cave43_2",457);
    add_next_texture(&texture, set_enter_cave43_3, "enter_cave43_3",458);
    add_next_texture(&texture, set_enter_cave44_0, "enter_cave44_0",460);
    add_next_texture(&texture, set_enter_cave44_1, "enter_cave44_1",461);
    add_next_texture(&texture, set_enter_cave44_2, "enter_cave44_2",462);
    add_next_texture(&texture, set_enter_cave44_3, "enter_cave44_3",463);
    add_next_texture(&texture, set_village_house_top0_0, "village_house_top0_0",468);
    add_next_texture(&texture, set_village_house_top0_1, "village_house_top0_1",469);
    add_next_texture(&texture, set_village_house_top0_2, "village_house_top0_2",470);
    add_next_texture(&texture, set_village_house_top0_3, "village_house_top0_3",471);
    add_next_texture(&texture, set_village_house_top0_4, "village_house_top0_4",472);
    add_next_texture(&texture, set_village_house_top0_5, "village_house_top0_5",473);
    add_next_texture(&texture, set_village_house_top0_6, "village_house_top0_6",474);
    add_next_texture(&texture, set_village_house_top0_7, "village_house_top0_7",475);
    add_next_texture(&texture, set_village_house_top1_0, "village_house_top1_0",510);
    add_next_texture(&texture, set_village_house_top1_1, "village_house_top1_1",511);
    add_next_texture(&texture, set_village_house_top1_2, "village_house_top1_2",512);
    add_next_texture(&texture, set_village_house_top1_3, "village_house_top1_3",513);
    add_next_texture(&texture, set_village_house_top1_4, "village_house_top1_4",514);
    add_next_texture(&texture, set_village_house_top1_5, "village_house_top1_5",515);
    add_next_texture(&texture, set_village_house_top1_6, "village_house_top1_6",476);
    add_next_texture(&texture, set_village_house_top1_7, "village_house_top1_7",477);
    add_next_texture(&texture, set_village_house0_0, "village_house0_0",478);
    add_next_texture(&texture, set_village_house0_1, "village_house0_1",479);
    add_next_texture(&texture, set_village_house0_2, "village_house0_2",480);
    add_next_texture(&texture, set_village_house0_3, "village_house0_3",481);
    add_next_texture(&texture, set_village_house0_4, "village_house0_4",482);
    add_next_texture(&texture, set_village_house0_5, "village_house0_5",483);
    add_next_texture(&texture, set_village_house0_6, "village_house0_6",484);
    add_next_texture(&texture, set_village_house0_7, "village_house0_7",485);
    add_next_texture(&texture, set_village_house1_0, "village_house1_0",498);
    add_next_texture(&texture, set_village_house1_1, "village_house1_1",499);
    add_next_texture(&texture, set_village_house1_2, "village_house1_2",500);
    add_next_texture(&texture, set_village_house1_3, "village_house1_3",501);
    add_next_texture(&texture, set_village_house1_4, "village_house1_4",486);
    add_next_texture(&texture, set_village_house1_5, "village_house1_5",487);
    add_next_texture(&texture, set_village_house1_6, "village_house1_6",488);
    add_next_texture(&texture, set_village_house1_7, "village_house1_7",489);
    add_next_texture(&texture, set_village_house2_0, "village_house2_0",502);
    add_next_texture(&texture, set_village_house2_1, "village_house2_1",503);
    add_next_texture(&texture, set_village_house2_2, "village_house2_2",504);
    add_next_texture(&texture, set_village_house2_3, "village_house2_3",505);
    add_next_texture(&texture, set_village_house2_4, "village_house2_4",490);
    add_next_texture(&texture, set_village_house2_5, "village_house2_5",491);
    add_next_texture(&texture, set_village_house2_6, "village_house2_6",492);
    add_next_texture(&texture, set_village_house2_7, "village_house2_7",493);
    add_next_texture(&texture, set_village_house3_0, "village_house3_0",506);
    add_next_texture(&texture, set_village_house3_1, "village_house3_1",507);
    add_next_texture(&texture, set_village_house3_2, "village_house3_2",508);
    add_next_texture(&texture, set_village_house3_3, "village_house3_3",509);
    add_next_texture(&texture, set_village_house3_4, "village_house3_4",494);
    add_next_texture(&texture, set_village_house3_5, "village_house3_5",495);
    add_next_texture(&texture, set_village_house3_6, "village_house3_6",496);
    add_next_texture(&texture, set_village_house3_7, "village_house3_7",497);
    add_next_texture(&texture, set_bed, "bed",2000);
    add_next_texture(&texture, set_bed1, "bed1",2001);
    add_next_texture(&texture, set_bed2, "bed2",2002);
    add_next_texture(&texture, set_bed3, "bed3",2003);
    add_next_texture(&texture, set_bed4, "bed4",2004);
    add_next_texture(&texture, set_bed5, "bed5",2005);
    add_next_texture(&texture, set_bed6, "bed6",2006);
    add_next_texture(&texture, set_bed7, "bed7",2007);
    add_next_texture(&texture, set_bed8, "bed8",2008);
    add_next_texture(&texture, set_bed9, "bed9",2009);
    add_next_texture(&texture, set_bed10, "bed10",2010);
    add_next_texture(&texture, set_bed11, "bed11",2011);
    add_next_texture(&texture, set_groundbed, "groundbed",2012);
    add_next_texture(&texture, set_shelf, "shelf",2013);
    add_next_texture(&texture, set_shelf2, "shelf2",2014);
    add_next_texture(&texture, set_shelf3, "shelf3",2015);
    add_next_texture(&texture, set_shelf4, "shelf4",2016);
    add_next_texture(&texture, set_shelf5, "shelf5",2017);
    add_next_texture(&texture, set_shelf6, "shelf6",2018);
    add_next_texture(&texture, set_shelf7, "shelf7",2019);
    add_next_texture(&texture, set_shelf8, "shelf8",2020);
    add_next_texture(&texture, set_shelf9, "shelf9",2021);
    add_next_texture(&texture, set_shelf10, "shelf10",2022);
    add_next_texture(&texture, set_shelf11, "shelf11",2023);
    add_next_texture(&texture, set_shelf12, "shelf12",2024);
    add_next_texture(&texture, set_shelf13, "shelf13",2025);
    add_next_texture(&texture, set_stairstop, "stairstop",2026);
    add_next_texture(&texture, set_stairsdown, "stairsdown",2027);
    return texture;
    }

    // 515
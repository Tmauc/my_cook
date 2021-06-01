/*
** EPITECH PROJECT, 2017
** my_cook.h
** File description:
** .h file to stock all functions from our screensaver librairy
*/

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>
#include <stdio.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#include "struct.h"

#ifndef MY_COOK_
#define MY_COOK_

int prog();
int *create_tab_int();
void destroy(files_t *fi);
void destroy2(files_t *fi);
void destroy3(files_t *fi);
void destroy_struct_characters(client_t *cl);

void text_end(files_t *fi);
void text_end_setting(files_t *fi);
void text_money(files_t *fi);
void text_game(files_t *fi, int i);

void draw(files_t *fi, client_t *cl);

void event_keypressed(files_t *fi, client_t *cl, sfEvent event);
void remove_money(files_t *fi);
void event_recipes_ramen3(files_t *fi, sfEvent event);

void menu(files_t *fi);
void menu_setup(files_t *fi);
int menu_prog(files_t *fi);
int menu_mousemove(files_t *fi, sfEvent event);
int menu_mousebutton(sfEvent event, files_t *fi);

void menu_buttons_setup(files_t *fi);
void menu_buttons_textrect(files_t *fi);

void recipes(files_t *fi);
void recipe_enter(files_t *fi, client_t *cl);
void menu_recipes_setup(files_t *fi);
int check_other_and_add(client_t *cl, files_t *fi);
void check_recipes_ok3(files_t *fi, client_t *cl);

void setting(files_t *fi);
void menu_setting_setup(files_t *fi);

void draw_recipes2(files_t *fi, client_t *cl);
void draw_menu_settings(files_t *fi);
void text_setting(files_t *fi);

int pause_menu_prog(files_t *fi);
void pause_menu_settings(files_t *fi);
void pause_menu_setup(files_t *fi);

int game_setup(files_t *fi);
int game_prog(files_t *fi);

void textsetting(files_t *fi);

void remove_characters(client_t *cl);
void characters_setup(files_t *fi);
void characters_rand(client_t *cl, files_t *fi);
void characters_move(client_t *cl, files_t *fi);

void recipes_setup(files_t *fi);
void recipes_setup2(files_t *fi);
void squaresetup_ingredients(files_t *fi);
int event_recipes(files_t *fi, client_t *cl, sfEvent event, int a);
int check_recipes(files_t *fi, client_t *cl);
void rand_recipe(client_t *cl, files_t *fi, int i);

void draw_ramen1(files_t *fi);
void ingredients_setup(files_t *fi);
void ingredients_setup2(files_t *fi);
void ingredients_setup3(files_t *fi);
void squaresetup_ingredients_ramen(files_t *fi);
void squaresetup_ingredients_2ramen(files_t *fi);
void setup_book_text(files_t *fi);
void spriteset_ingredients(files_t *fi);

client_t *create_all_characters(files_t *fi);
void new_characters(files_t *fi);

void soundsetup(files_t *fi);
void soundplay_gong(files_t *fi);
void soundplay_knife(files_t *fi);
void soundplay_bell(files_t *fi);
void soundplay_door(files_t *fi);

void volumesetup(files_t *fi);
void change_volume(files_t *fi);
void set_volume_on(files_t *fi);
void set_volume_off(files_t *fi);
void remove_volume(files_t *fi);
void add_volume(files_t *fi);
void volumesetup(files_t *fi);

void add_recipes(char *name, char *ingredients);
void activate_recipe(int nbr);
void disactive_recipe(int nbr);
void remove_tab_case_characters_recipes(client_t *cl, int i);

char **read_recipes(void);
int create_book(files_t *fi, int j, int iter);
void print_page_recipes(files_t *fi, int page);
void draw_recipes_book(files_t *fi, int page);

void fill_str(char *str, char chr);
char *read_file(char *name);

void printtab(client_t *cl);

#endif

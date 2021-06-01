/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct s_sounds
{
	float master_volume;
	float last_master_volume;
	float volume_menu;
	float volume_game;
	float volume_knife;
	float volume_gong;
	float volume_bell;
	float volume_door;
	float volume_menu_porcentage;
	float volume_game_porcentage;
	float volume_knife_porcentage;
	float volume_gong_porcentage;
	float volume_bell_porcentage;
	float volume_door_porcentage;
	sfSound *sound_knife;
	sfSound *sound_gong;
	sfSound *sound_bell;
	sfSound *sound_door;
	sfSoundBuffer *buffer_knife;
	sfSoundBuffer *buffer_gong;
	sfSoundBuffer *buffer_bell;
	sfSoundBuffer *buffer_door;
} sounds_t;

typedef struct s_game
{
	int a;
	int money;
	sfText *text;
	sfText *money_text;
	sfVector2f textsquare2;
	sfVector2f moneytextsquare2;
	sfMusic *music;
	sfTexture *Gtexture;
	sfSprite *Gsprite;
	sfIntRect gsquare;
} game_t;

typedef struct s_characters
{
	float seconds_characters;
	sfTexture *textu;
	sfSprite *sprit;
	sfClock *clock_characters;
	sfTime tmp_characters;
} characters_t;

typedef struct s_menu
{
	int a;
	int b;
	int nbr_pages;
	int page_now;
	sfText *text;
	sfVector2f textsquare2;
	sfMusic *music;
	sfTexture *Mtexture;
	sfSprite *Msprite;
	sfIntRect msquare;
	sfTexture *Stexture;
	sfSprite *Ssprite;
	sfIntRect ssquare;
	sfVector2f ssquare2;
	sfTexture *Vtexture;
	sfSprite *Vsprite;
	sfIntRect vsquare;
	sfVector2f vsquare2;
	sfTexture *Ctexture;
	sfSprite *Csprite;
	sfIntRect csquare;
	sfTexture *Wtexture;
	sfSprite *Wsprite;
	sfIntRect wsquare;
	sfVector2f csquare2;
	sfTexture *Mptexture;
	sfSprite *Mpsprite;
	sfIntRect mpsquare;
	sfTexture *ftexture;
	sfSprite *fsprite;
	sfIntRect fsquare;
	sfVector2f fsquare2;
	sfTexture *f2texture;
	sfSprite *f2sprite;
	sfIntRect f2square;
	sfVector2f f2square2;
	sfTexture *rtexture;
	sfSprite *rsprite;
	sfIntRect rsquare;
	sfVector2f rsquare2;
	sfTexture *ptexture;
	sfSprite *psprite;
	sfIntRect psquare;
	sfVector2f psquare2;
} menu_t;

typedef struct s_menu_buttons
{
	sfTexture *playtexture;
	sfSprite *playsprite;
	sfIntRect playsquare;
	sfVector2f playsquare2;
	sfTexture *recipestexture;
	sfSprite *recipessprite;
	sfIntRect recipessquare;
	sfVector2f recipessquare2;
	sfTexture *htptexture;
	sfSprite *htpsprite;
	sfIntRect htpsquare;
	sfVector2f htpsquare2;
	sfTexture *stexture;
	sfSprite *ssprite;
	sfIntRect ssquare;
	sfVector2f ssquare2;
	sfTexture *qtexture;
	sfSprite *qsprite;
	sfIntRect qsquare;
	sfVector2f qsquare2;
	sfTexture *oftexture;
	sfSprite *ofsprite;
	sfIntRect ofsquare;
	sfVector2f ofsquare2;
} menu_buttons_t;

typedef struct s_client
{
	int nbr_characters;
	int nbr_characters_ok;
	int up_or_down;
	int *tab_characters;
	int *tab_recipes;
	sfSprite *sprite;
	sfVector2f square2;
	sfIntRect square;
} client_t;

typedef struct s_brecipes
{
	char *title;
	char *ingre;
	int activated;
} book_recipes_t;

typedef struct s_btext
{
	sfFont *ingre_font;
	sfText *title[4];
	sfText *ingre[4];
} book_text_t;

typedef struct s_recipes2
{
	int a;
	sfTexture *k1texture;
	sfSprite *k1sprite;
	sfIntRect k1square;
	sfVector2f k1square2;
	sfTexture *k4texture;
	sfSprite *k4sprite;
	sfIntRect k4square;
	sfVector2f k4square2;
	sfTexture *k2texture;
	sfSprite *k2sprite;
	sfIntRect k2square;
	sfVector2f k2square2;
	sfTexture *k3texture;
	sfSprite *k3sprite;
	sfIntRect k3square;
	sfVector2f k3square2;
	sfTexture *su1texture;
	sfSprite *su1sprite;
	sfIntRect su1square;
	sfTexture *su2texture;
	sfSprite *su2sprite;
	sfIntRect su2square;
	sfTexture *r1texture;
	sfSprite *r1sprite;
	sfIntRect r1square;
	sfTexture *brtexture;
	sfSprite *brsprite;
	sfIntRect brsquare;
	sfVector2f brsquare2;
} recipes2_t;

typedef struct s_ingredients
{
	int sushi1_rice;
	int sushi1_cucumber;
	int sushi1_seaweed;
	int sushi1_salmon;
	int sushi2_rice;
	int sushi2_salmon;
	int ramen1_bol;
	int ramen1_pasta;
	int ramen1_eggs;
	int ramen1_shrimp;
	int ramen1_plant;
	int ramen1_carrot;
	int ramen1_graine;
	int ramen1_beaf;
	int ramen1_sojaplant;
	int bolrice_rice;
	int bolrice_bol;
	int bolrice;
	int sushi1;
	int sushi2;
	int ramen1;
	sfTexture *ramen1texture;
	sfSprite *ramen1sprite;
	sfIntRect ramen1square;
	sfVector2f ramen1square2;
	sfTexture *bolricetexture;
	sfSprite *bolricesprite;
	sfIntRect bolricesquare;
	sfVector2f bolricesquare2;
	sfTexture *bolrrtexture;
	sfSprite *bolrrsprite;
	sfIntRect bolrrsquare;
	sfVector2f bolrrsquare2;
	sfTexture *bolrbtexture;
	sfSprite *bolrbsprite;
	sfIntRect bolrbsquare;
	sfVector2f bolrbsquare2;
	sfTexture *sushi1texture;
	sfSprite *sushi1sprite;
	sfIntRect sushi1square;
	sfVector2f sushi1square2;
	sfTexture *ricetexture;
	sfSprite *ricesprite;
	sfIntRect ricesquare;
	sfVector2f ricesquare2;
	sfTexture *salmontexture;
	sfSprite *salmonsprite;
	sfIntRect salmonsquare;
	sfVector2f salmonsquare2;
	sfTexture *pastatexture;
	sfSprite *pastasprite;
	sfIntRect pastasquare;
	sfVector2f pastasquare2;
	sfTexture *grainetexture;
	sfSprite *grainesprite;
	sfIntRect grainesquare;
	sfVector2f grainesquare2;
	sfTexture *beaftexture;
	sfSprite *beafsprite;
	sfIntRect beafsquare;
	sfVector2f beafsquare2;
	sfTexture *carrottexture;
	sfSprite *carrotsprite;
	sfIntRect carrotsquare;
	sfVector2f carrotsquare2;
	sfTexture *shrimptexture;
	sfSprite *shrimpsprite;
	sfIntRect shrimpsquare;
	sfVector2f shrimpsquare2;
	sfTexture *boltexture;
	sfSprite *bolsprite;
	sfIntRect bolsquare;
	sfVector2f bolsquare2;
	sfTexture *sojaplanttexture;
	sfSprite *sojaplantsprite;
	sfIntRect sojaplantsquare;
	sfVector2f sojaplantsquare2;
	sfTexture *eggstexture;
	sfSprite *eggssprite;
	sfIntRect eggssquare;
	sfVector2f eggssquare2;
	sfTexture *planttexture;
	sfSprite *plantsprite;
	sfIntRect plantsquare;
	sfVector2f plantsquare2;
	sfTexture *rice2texture;
	sfSprite *rice2sprite;
	sfIntRect rice2square;
	sfVector2f rice2square2;
	sfTexture *salmon2texture;
	sfSprite *salmon2sprite;
	sfIntRect salmon2square;
	sfVector2f salmon2square2;
	sfTexture *seaweedtexture;
	sfSprite *seaweedsprite;
	sfIntRect seaweedsquare;
	sfVector2f seaweedsquare2;
	sfTexture *cucumbertexture;
	sfSprite *cucumbersprite;
	sfIntRect cucumbersquare;
	sfVector2f cucumbersquare2;
} ingredients_t;

typedef struct s_files
{
	int a;
	int end;
	sfText *endtext;
	sfVector2f endtextsquare2;
	sfRenderWindow *window;
	menu_t menu;
	menu_buttons_t menu_buttons;
	game_t game;
	characters_t characters;
	sounds_t sounds;
	recipes2_t recipes;
	char **frecipes;
	book_recipes_t **book;
	book_text_t btext;
	ingredients_t ingredients;
} files_t;

#endif

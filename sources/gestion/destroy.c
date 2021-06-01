/*
** EPITECH PROJECT, 2017
** destroy
** File description:
** desroy
*/

#include "my.h"
#include "my_cook.h"

void destroy_sprite(files_t *fi)
{
	sfSprite_destroy(fi->menu.Msprite);
	sfSprite_destroy(fi->menu.Mpsprite);
	sfSprite_destroy(fi->menu.Wsprite);
	sfSprite_destroy(fi->menu.Csprite);
	sfSprite_destroy(fi->menu.Ssprite);
	sfSprite_destroy(fi->game.Gsprite);
	sfSprite_destroy(fi->menu.Vsprite);
	sfSprite_destroy(fi->menu.fsprite);
	sfSprite_destroy(fi->menu.f2sprite);
	sfSprite_destroy(fi->menu.rsprite);
	sfSprite_destroy(fi->menu.psprite);
	sfSprite_destroy(fi->menu_buttons.playsprite);
	sfSprite_destroy(fi->menu_buttons.recipessprite);
	sfSprite_destroy(fi->menu_buttons.htpsprite);
	sfSprite_destroy(fi->menu_buttons.ssprite);
	sfSprite_destroy(fi->menu_buttons.qsprite);
	sfSprite_destroy(fi->menu_buttons.ofsprite);
}

void destroy_texture(files_t *fi)
{
	sfTexture_destroy(fi->menu.Mtexture);
	sfTexture_destroy(fi->menu.Mptexture);
	sfTexture_destroy(fi->menu.Wtexture);
	sfTexture_destroy(fi->menu.Ctexture);
	sfTexture_destroy(fi->game.Gtexture);
	sfTexture_destroy(fi->menu.Stexture);
	sfTexture_destroy(fi->menu.Vtexture);
	sfTexture_destroy(fi->menu.ftexture);
	sfTexture_destroy(fi->menu.f2texture);
	sfTexture_destroy(fi->menu.rtexture);
	sfTexture_destroy(fi->menu.ptexture);
	sfTexture_destroy(fi->menu_buttons.playtexture);
	sfTexture_destroy(fi->menu_buttons.recipestexture);
	sfTexture_destroy(fi->menu_buttons.htptexture);
	sfTexture_destroy(fi->menu_buttons.stexture);
	sfTexture_destroy(fi->menu_buttons.qtexture);
	sfTexture_destroy(fi->menu_buttons.oftexture);
}

void destroy_sound_music(files_t *fi)
{
	sfSound_destroy(fi->sounds.sound_knife);
	sfSound_destroy(fi->sounds.sound_gong);
	sfSound_destroy(fi->sounds.sound_bell);
	sfSound_destroy(fi->sounds.sound_door);
	sfSoundBuffer_destroy(fi->sounds.buffer_knife);
	sfSoundBuffer_destroy(fi->sounds.buffer_bell);
	sfSoundBuffer_destroy(fi->sounds.buffer_gong);
	sfSoundBuffer_destroy(fi->sounds.buffer_door);
	sfMusic_destroy(fi->menu.music);
	sfMusic_destroy(fi->game.music);
}

void destroy_struct_characters(client_t *cl)
{
	int i;

	for (i = 0; i != 49; i++) {
		sfSprite_destroy(cl[i].sprite);
	}
	free(cl->tab_characters);
	free(cl->tab_recipes);
	free(cl);
}

void destroy(files_t *fi)
{
	destroy_sprite(fi);
	destroy_texture(fi);
	destroy_sound_music(fi);
	destroy2(fi);
	destroy3(fi);
	sfRenderWindow_destroy(fi->window);
}

/*
** EPITECH PROJECT, 2018
** menu_settings2.c
** File description:
** 2nd file for settings menu
*/

#include "my.h"
#include "my_cook.h"

void draw_menu_settings(files_t *fi)
{
	if (sfMusic_getStatus(fi->menu.music) == 0)
		sfMusic_play(fi->menu.music);
	sfRenderWindow_drawSprite(fi->window, fi->menu.Ssprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu.Vsprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.ofsprite, NULL);
	text_setting(fi);
	sfRenderWindow_display(fi->window);
}

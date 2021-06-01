/*
** EPITECH PROJECT, 2017
** menu
** File description:
** menu
*/

#include "my.h"
#include "my_cook.h"

void restart_button(files_t *fi)
{
	fi->menu_buttons.playsquare.left = 0;
	fi->menu_buttons.recipessquare.left = 0;
	fi->menu_buttons.htpsquare.left = 0;
	fi->menu_buttons.ssquare.left = 0;
	fi->menu_buttons.qsquare.left = 0;
}

void draw_menu(files_t *fi)
{
	sfRenderWindow_drawSprite(fi->window, fi->menu.Msprite, NULL);
	menu_buttons_textrect(fi);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.playsprite,
	NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.recipessprite,
	NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.htpsprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.ssprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.qsprite, NULL);
	sfRenderWindow_display(fi->window);
}

void sound_menumove(files_t *fi, sfEvent event)
{
	if (menu_mousemove(fi, event) == 0)
		soundplay_knife(fi);
}

void menu(files_t *fi)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			fi->menu.a = 5;
		else if (event.type == sfEvtMouseButtonPressed)
			fi->menu.a = menu_mousebutton(event, fi);
		else {
			sound_menumove(fi, event);
			sfSprite_setTextureRect(fi->menu.Msprite,
			fi->menu.msquare);
		}
	}
	if (sfMusic_getStatus(fi->menu.music) == 0)
		sfMusic_play(fi->menu.music);
	draw_menu(fi);
}

int menu_prog(files_t *fi)
{
	if (fi->menu.a == 0) {
		menu(fi);
	} if (fi->menu.a == 1) {
		fi->menu.a = 0;
		return (1);
	} if (fi->menu.a == 2) {
		restart_button(fi);
		recipes(fi);
	} if (fi->menu.a == 3) {
		restart_button(fi);
		setting(fi);
	} if (fi->menu.a == 5)
		return (2);
	return (0);
}

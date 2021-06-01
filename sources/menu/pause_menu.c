/*
** EPITECH PROJECT, 2017
** pause_menu.c
** File description:
** pause_menu.c
*/

#include "my.h"
#include "my_cook.h"

int pause_menu_mousebutton(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 222 && event.mouseButton.x <= 375 &&
	event.mouseButton.y >= 304 && event.mouseButton.y <= 358) {
		fi->menu.psquare.left = 600;
		return (1);
	} if (event.mouseButton.x >= 211 && event.mouseButton.x <= 387 &&
	event.mouseButton.y >= 421 && event.mouseButton.y <= 486) {
		fi->menu.psquare.left = 1200;
		return (2);
	} if (event.mouseButton.x >= 161 && event.mouseButton.x <= 436 &&
	event.mouseButton.y >= 522 && event.mouseButton.y <= 577) {
		fi->menu.psquare.left = 1800;
		return (3);
	} if (event.mouseButton.x >= 248 && event.mouseButton.x <= 345 &&
	event.mouseButton.y >= 632 && event.mouseButton.y <= 695) {
		fi->menu.psquare.left = 2400;
		return (4);
	} else
		return (0);
}

int pause_menu_mousemove(files_t *fi, sfEvent event)
{
	if (event.mouseMove.x >= 222 && event.mouseMove.x <= 375 &&
	event.mouseMove.y >= 304 && event.mouseMove.y <= 358) {
		fi->menu.psquare.left = 600;
		return (0);
	} if (event.mouseMove.x >= 211 && event.mouseMove.x <= 387 &&
	event.mouseMove.y >= 421 && event.mouseMove.y <= 486) {
		fi->menu.psquare.left = 1200;
		return (0);
	} if (event.mouseMove.x >= 161 && event.mouseMove.x <= 436 &&
	event.mouseMove.y >= 522 && event.mouseMove.y <= 577) {
		fi->menu.psquare.left = 1800;
		return (0);
	} if (event.mouseMove.x >= 248 && event.mouseMove.x <= 345 &&
	event.mouseMove.y >= 632 && event.mouseMove.y <= 695) {
		fi->menu.psquare.left = 2400;
		return (0);
	} else {
		fi->menu.psquare.left = 0;
		return (0);
	}
}

int pause_menu(files_t *fi)
{
	int o = 0;
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			return (4);
		if (event.type == sfEvtMouseButtonPressed)
			return (pause_menu_mousebutton(event, fi));
		else if (event.type == sfEvtKeyPressed &&
		event.key.code == sfKeyEscape)
			return (1);
		else
			pause_menu_mousemove(fi, event);
	}
	if (sfMusic_getStatus(fi->game.music) == 0)
		sfMusic_play(fi->game.music);
	sfSprite_setTextureRect(fi->menu.psprite, fi->menu.psquare);
	sfRenderWindow_drawSprite(fi->window, fi->menu.psprite, NULL);
	sfRenderWindow_display(fi->window);
	return (0);
}

int pause_menu_prog(files_t *fi)
{
	while (fi->menu.b != 1) {
		if (fi->menu.b == 0)
			fi->menu.b = pause_menu(fi);
		if (fi->menu.b == 2)
			pause_menu_settings(fi);
		if (fi->menu.b == 3) {
			fi->menu.b = 1;
			sfMusic_stop(fi->game.music);
			return (3);
		}
		if (fi->menu.b == 4)
			return (5);
	}
	return (1);
}

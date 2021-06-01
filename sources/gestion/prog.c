/*
** EPITECH PROJECT, 2017
** prog
** File description:
** prog
*/

#include "my.h"
#include "my_cook.h"

int end(files_t *fi)
{
	int a = 0;
	sfEvent event;

	while (a == 0) {
		while (sfRenderWindow_pollEvent(fi->window, &event)) {
			if (event.type == sfEvtClosed)
				return (2);
			if (event.type == sfEvtKeyPressed &&
			event.key.code == sfKeyReturn)
				return (2);
		}
		sfRenderWindow_drawSprite(fi->window, fi->game.Gsprite, NULL);
		text_end(fi);
		sfRenderWindow_display(fi->window);
	}
}

sfRenderWindow* window_create(files_t *fi, char *name)
{
	sfVideoMode window2 = {1920, 1080, 32};
	fi->window = sfRenderWindow_create(window2, name, sfClose, NULL);
	return (0);
}

void create2(files_t *fi)
{
	fi->end = 0;
	menu_setup(fi);
	menu_recipes_setup(fi);
	menu_setting_setup(fi);
	pause_menu_setup(fi);
	recipes_setup(fi);
	recipes_setup2(fi);
	ingredients_setup(fi);
	ingredients_setup3(fi);
	text_end_setting(fi);
}

int create(files_t *fi)
{
	int i = 9;
	int j = 0;
	int iter = 0;

	window_create(fi, "my_cook");
	fi->characters.clock_characters = sfClock_create();
	srand((long)&i);
	fi->frecipes = read_recipes();
	create_book(fi, j, iter);
	volumesetup(fi);
	create2(fi);
	if (game_setup(fi) == 0)
		return (0);
	soundsetup(fi);
	return (1);
}

int prog(void)
{
	int o = 0;
	files_t fi;

	if (create(&fi) == 0)
		return (0);
	while (sfRenderWindow_isOpen(fi.window)) {
		while (o == 0) {
			o = menu_prog(&fi);
		}
		sfMusic_stop(fi.menu.music);
		if (o == 1) {
			o = game_prog(&fi);
		} else if (o == 2)
			sfRenderWindow_close(fi.window);
		if (o == 3)
			o = end(&fi);
	}
	destroy(&fi);
	return (0);
}

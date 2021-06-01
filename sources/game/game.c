/*
** EPITECH PROJECT, 2017
** game.c
** File description:
** game.c
*/

#include "my.h"
#include "my_cook.h"

void game(files_t *fi, client_t *cl, int *done)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			fi->a = 5;
		if (event.type == sfEvtKeyPressed)
			event_keypressed(fi, cl, event);
	}
	if (sfMusic_getStatus(fi->game.music) == 0)
		sfMusic_play(fi->game.music);
	if (fi->a != 5)
		fi->a = pause_menu_prog(fi);
	characters_rand(cl, fi);
	draw(fi, cl);
	characters_move(cl, fi);
	sfRenderWindow_display(fi->window);
}

void setup_client(client_t *cl)
{
	cl->nbr_characters_ok = 0;
	cl->up_or_down = 0;
	cl->tab_characters = create_tab_int();
	cl->tab_recipes = create_tab_int();
}

int game_prog(files_t *fi)
{
	int done = 0;
	client_t *cl = create_all_characters(fi);

	setup_client(cl);
	characters_rand(cl, fi);
	while (!done) {
		if (fi->end == 1)
			return (3);
		if (fi->a == 1) {
			game(fi, cl, &done);
		} if (fi->a == 3) {
			fi->a = 1;
			return (0);
		} if (fi->a == 5) {
			destroy_struct_characters(cl);
			return (2);
		}
	}
	return (0);
}

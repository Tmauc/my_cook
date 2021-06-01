/*
** EPITECH PROJECT, 2017
** event.c
** File description:
** event.c
*/

#include "my.h"
#include "my_cook.h"

void event_keypressed4(files_t *fi, client_t *cl, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyP:
			remove_characters(cl);
			break;
		case sfKeyEscape:
			fi->menu.b = 0;
			break;
	}
}

void event_keypressed3(files_t *fi, client_t *cl, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyNum7:
			fi->recipes.a = 6;
			check_recipes(fi, cl);
			break;
		case sfKeyNum8:
			fi->recipes.a = 8;
			check_recipes(fi, cl);
			break;
		case sfKeyNum9:
			fi->recipes.a = 9;
			check_recipes(fi, cl);
			break;
		default:
			event_keypressed4(fi, cl, event);
	}
}

void event_keypressed2(files_t *fi, client_t *cl, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyNum4:
			fi->recipes.a = 3;
			check_recipes(fi, cl);
			break;
		case sfKeyNum5:
			fi->recipes.a = 4;
			check_recipes(fi, cl);
			break;
		case sfKeyNum6:
			fi->recipes.a = 5;
			check_recipes(fi, cl);
			break;
		default:
			event_keypressed3(fi, cl, event);
	}
}

void event_keypressed(files_t *fi, client_t *cl, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyNum1:
			fi->recipes.a = 0;
			check_recipes(fi, cl);
			break;
		case sfKeyNum2:
			fi->recipes.a = 1;
			check_recipes(fi, cl);
			break;
		case sfKeyNum3:
			fi->recipes.a = 2;
			check_recipes(fi, cl);
			break;
		default:
			event_keypressed2(fi, cl, event);
	}
}

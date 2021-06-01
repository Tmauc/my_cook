/*
** EPITECH PROJECT, 2017
** characters.c
** File description:
** characters.c
*/

#include "my.h"
#include "my_cook.h"

void check_remove_character(client_t *cl, files_t *fi)
{
	int i = 0;

	while (i < cl->nbr_characters) {
		if (cl[cl->tab_characters[i]].square2.x >= 1860) {
			cl[cl->tab_characters[i]].square2.x = -200;
			soundplay_door(fi);
			remove_tab_case_characters_recipes(cl, i);
			cl->nbr_characters--;
			cl->nbr_characters_ok--;
		}
		i++;
	}
}

void check_nbr_characters(client_t *cl, files_t *fi)
{
	int i = 0;

	cl->nbr_characters = 0;
	while (i < 9) {
		if (cl->tab_characters[i] != -1) {
			cl->nbr_characters++;
		}
		i++;
	}
	check_remove_character(cl, fi);
}

void characters_rand(client_t *cl, files_t *fi)
{
	int a = 0;

	check_nbr_characters(cl, fi);
	a = rand() % 1000 + 0;
	if (a == 5)
		check_other_and_add(cl, fi);
}

void characters_move2(client_t *cl, files_t *fi, int j, int i)
{
	int b = 0;

	b = 1540 - 160 * j;
	if (i < cl->nbr_characters_ok)
		b = 1920;
	if (fi->characters.seconds_characters > 0.1) {
		if (cl[cl->tab_characters[j]].square2.x >= b) {
			cl[cl->tab_characters[j]].square2.x = b;
		} else {
			cl[cl->tab_characters[j]].square2.x += 3;
		}
	}
	sfSprite_setTextureRect(cl[cl->tab_characters[j]].sprite,
	cl[cl->tab_characters[j]].square);
	sfSprite_setPosition(cl[cl->tab_characters[j]].sprite,
	cl[cl->tab_characters[j]].square2);
	sfClock_restart(fi->characters.clock_characters);
}

void characters_move(client_t *cl, files_t *fi)
{
	int j = 0;

	fi->characters.tmp_characters =
	sfClock_getElapsedTime(fi->characters.clock_characters);
	fi->characters.seconds_characters =
	fi->characters.tmp_characters.microseconds / 1000.0;
	for (int i = 0; i != cl->nbr_characters; i++, j++, cl->up_or_down++) {
		characters_move2(cl, fi, j, i);
	}
}

/*
** EPITECH PROJECT, 2017
** destroy3.c
** File description:
** desroy3.c
*/

#include "my.h"
#include "my_cook.h"

void destroy_other(files_t *fi)
{
	int i = 0;
	while (fi->book[i] != NULL) {
		free(fi->book[i]);
		i++;
	}
	sfClock_destroy(fi->characters.clock_characters);
	free(fi->frecipes);
}

void destroy_text(files_t *fi)
{
	sfText_destroy(fi->game.text);
	sfText_destroy(fi->game.money_text);
	sfText_destroy(fi->menu.text);
	sfText_destroy(fi->btext.title[4]);
	sfText_destroy(fi->btext.ingre[4]);
	sfFont_destroy(fi->btext.ingre_font);
}

void destroy3(files_t *fi)
{
	destroy_text(fi);
	destroy_other(fi);
}

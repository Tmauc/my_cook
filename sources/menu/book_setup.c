/*
** EPITECH PROJECT, 2018
** book_setup.c
** File description:
** setup book
*/

#include "my.h"
#include "my_cook.h"

void setup_book_text(files_t *fi)
{
	sfVector2f post[4] = {{420, 200}, {420, 500}, {925, 200}, {925, 500}};
	sfVector2f posi[4] = {{470, 300}, {470, 600}, {975, 300}, {975, 600}};

	fi->btext.ingre_font = sfFont_createFromFile("ressources/font/font2.otf");
	for (int i = 0; i < 4; i++) {
		fi->btext.title[i] = sfText_create();
		sfText_setFont(fi->btext.title[i], fi->btext.ingre_font);
		sfText_setCharacterSize(fi->btext.title[i], 55);
		sfText_setPosition(fi->btext.title[i], post[i]);
		sfText_setColor(fi->btext.title[i], sfBlack);
		fi->btext.ingre[i] = sfText_create();
		sfText_setFont(fi->btext.ingre[i], fi->btext.ingre_font);
		sfText_setCharacterSize(fi->btext.ingre[i], 30);
		sfText_setPosition(fi->btext.ingre[i], posi[i]);
		sfText_setColor(fi->btext.ingre[i], sfBlack);
	}
}

void draw_recipes_book(files_t *fi, int page)
{
	int i = (page == 1 ? 1 : 0);
	int tmp = (page - 1) * 4 + i - 1;

	while (i < 4 && fi->book[tmp] != NULL) {
		sfText_setString(fi->btext.title[i], fi->book[tmp]->title);
		sfText_setString(fi->btext.ingre[i], fi->book[tmp]->ingre);
		sfRenderWindow_drawText(fi->window, fi->btext.title[i], NULL);
		sfRenderWindow_drawText(fi->window, fi->btext.ingre[i], NULL);
		i += 1;
		tmp = (page - 1) * 4 + i - 1;
	}
}

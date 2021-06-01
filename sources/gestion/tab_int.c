/*
** EPITECH PROJECT, 2017
** tab_int.c
** File description:
** tabendint.c
*/

#include "my.h"
#include "my_cook.h"

void text_end_setting(files_t *fi)
{
	fi->endtext = sfText_create();
	sfFont *font = sfFont_createFromFile("ressources/font/font.ttf");

	fi->endtextsquare2.x = 480;
	fi->endtextsquare2.y = 400;
	sfText_setColor(fi->endtext, sfBlack);
	sfText_setFont(fi->endtext, font);
	sfText_setCharacterSize(fi->endtext, 100);
	sfText_setPosition(fi->endtext, fi->endtextsquare2);
}

int *create_tab_int(void)
{
	int *b = malloc(sizeof(int) * 10);
	int i = 0;

	while (i < 10) {
		b[i] = -1;
		i++;
	}
	return (b);
}

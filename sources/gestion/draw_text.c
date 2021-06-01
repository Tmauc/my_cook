/*
** EPITECH PROJECT, 2017
** draw_text.c
** File description:
** draw_text.c
*/

#include "my.h"
#include "my_cook.h"

void text_end(files_t *fi)
{
	sfText_setString(fi->endtext, "You have 0 $, you loos !! (press enter)");
	sfRenderWindow_drawText(fi->window, fi->endtext, NULL);
}

void text_money(files_t *fi)
{
	char *t = int_to_str(fi->game.money);
	char *p = my_strcat(t, "$");

	fi->game.moneytextsquare2.x = 1705;
	fi->game.moneytextsquare2.y = -50;
	sfText_setPosition(fi->game.money_text, fi->game.moneytextsquare2);
	sfText_setString(fi->game.money_text, p);
	sfRenderWindow_drawText(fi->window, fi->game.money_text, NULL);
	free(t);
	free(p);
}

void text_game(files_t *fi, int i)
{
	char *s = int_to_str(i + 1);

	fi->game.textsquare2.y = 100 + 100 * i;
	sfText_setString(fi->game.text, s);
	sfText_setPosition(fi->game.text, fi->game.textsquare2);
	sfRenderWindow_drawText(fi->window, fi->game.text, NULL);
	free(s);
}

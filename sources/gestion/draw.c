/*
** EPITECH PROJECT, 2017
** draw
** File description:
** draw
*/

#include "my.h"
#include "my_cook.h"

void draw_recipes3(files_t *fi, client_t *cl, int i)
{
	if (cl->tab_recipes[i] == 4) {
		fi->recipes.k4square2.y = 100 + i * 100;
		sfSprite_setPosition(fi->recipes.k4sprite,
		fi->recipes.k4square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.k4sprite, NULL);
	}
}

void draw_recipes(files_t *fi, client_t *cl, int i)
{
	if (cl->tab_recipes[i] == 1) {
		fi->recipes.k1square2.y = 100 + i * 100;
		sfSprite_setPosition(fi->recipes.k1sprite,
		fi->recipes.k1square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.k1sprite, NULL);
	} if (cl->tab_recipes[i] == 2) {
		fi->recipes.k2square2.y = 100 + i * 100;
		sfSprite_setPosition(fi->recipes.k2sprite,
		fi->recipes.k2square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.k2sprite, NULL);
	} if (cl->tab_recipes[i] == 3) {
		fi->recipes.k3square2.y = 100 + i * 100;
		sfSprite_setPosition(fi->recipes.k3sprite,
		fi->recipes.k3square2);
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.k3sprite, NULL);
	}
	draw_recipes3(fi, cl, i);
}

void draw(files_t *fi, client_t *cl)
{
	int i = 0;
	int j = cl->nbr_characters - 1;

	sfRenderWindow_drawSprite(fi->window, fi->game.Gsprite, NULL);
	text_money(fi);
	while (i != cl->nbr_characters) {
		sfRenderWindow_drawSprite(fi->window,
		cl[cl->tab_characters[j]].sprite, NULL);
		i++;
		j--;
	}
	i = 0;
	while (i != cl->nbr_characters) {
		draw_recipes(fi, cl, i);
		text_game(fi, i);
		i++;
	}
}

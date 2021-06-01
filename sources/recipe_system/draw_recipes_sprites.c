/*
** EPITECH PROJECT, 2018
** draw_recipes_sprites.c
** File description:
** draw sprites
*/

#include "my.h"
#include "my_cook.h"

void draw_money(files_t *fi)
{
	char *t = int_to_str(fi->game.money);
	char *p = my_strcat(t, "$");

	fi->game.moneytextsquare2.x = 200;
	fi->game.moneytextsquare2.y = 800;
	sfText_setPosition(fi->game.money_text, fi->game.moneytextsquare2);
	sfText_setString(fi->game.money_text, p);
	sfRenderWindow_drawText(fi->window, fi->game.money_text, NULL);
	free(t);
	free(p);
}

void draw_bolrice(files_t *fi)
{
	if (fi->ingredients.bolrice == 3) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.bolricesprite, NULL);
	} else {
		if (fi->ingredients.bolrice_bol == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.bolrbsprite, NULL);
		} if (fi->ingredients.bolrice_rice == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.bolrrsprite, NULL);
		}
	}
}

void draw_sushi1(files_t *fi)
{
	if (fi->ingredients.sushi1 == 3) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.sushi1sprite, NULL);
	} else {
		if (fi->ingredients.sushi1_rice == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.rice2sprite, NULL);
		} if (fi->ingredients.sushi1_seaweed == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.seaweedsprite, NULL);
		} if (fi->ingredients.sushi1_cucumber == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.cucumbersprite, NULL);
		} if (fi->ingredients.sushi1_salmon == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.salmon2sprite, NULL);
		}
	}
}

void draw_sushi2(files_t *fi)
{
	if (fi->ingredients.sushi2 == 3) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.ricesprite, NULL);
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.salmonsprite, NULL);
	} else {
		if (fi->ingredients.sushi2_rice == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.ricesprite, NULL);
		} if (fi->ingredients.sushi2_salmon == 1) {
			sfRenderWindow_drawSprite(fi->window,
			fi->ingredients.salmonsprite, NULL);
		}
	}
}

void draw_recipes2(files_t *fi, client_t *cl)
{
	draw_money(fi);
	if (cl->tab_recipes[fi->recipes.a] == 1) {
		sfRenderWindow_drawSprite(fi->window, fi->recipes.su1sprite,
		NULL);
		draw_sushi1(fi);
	} if (cl->tab_recipes[fi->recipes.a] == 2) {
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.su2sprite, NULL);
		draw_sushi2(fi);
	} if (cl->tab_recipes[fi->recipes.a] == 3) {
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.r1sprite, NULL);
		draw_ramen1(fi);
	} if (cl->tab_recipes[fi->recipes.a] == 4) {
		sfRenderWindow_drawSprite(fi->window,
		fi->recipes.brsprite, NULL);
		draw_bolrice(fi);
	}
}

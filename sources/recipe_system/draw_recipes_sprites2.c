/*
** EPITECH PROJECT, 2018
** draw_recipes_sprites.c
** File description:
** draw sprites
*/

#include "my.h"
#include "my_cook.h"

void check_recipes_ok3(files_t *fi, client_t *cl)
{
	if (fi->ingredients.bolrice == 3) {
		remove_characters(cl);
		fi->ingredients.bolrice_bol = 0;
		fi->ingredients.bolrice_rice = 0;
		fi->ingredients.bolrice = 0;
		fi->game.money += 9;
	}
}

void event6(files_t *fi)
{
	if (fi->ingredients.ramen1_bol == 1 &&
	fi->ingredients.ramen1_sojaplant == 1 &&
	fi->ingredients.ramen1_beaf == 1 &&
	fi->ingredients.ramen1_carrot == 1 &&
	fi->ingredients.ramen1_pasta == 1 &&
	fi->ingredients.ramen1_shrimp == 1 &&
	fi->ingredients.ramen1_plant == 1 &&
	fi->ingredients.ramen1_eggs == 1 &&
	fi->ingredients.ramen1_graine == 1) {
	fi->ingredients.ramen1 = 3;
	}
}

void draw_3ramen1(files_t *fi)
{
	if (fi->ingredients.ramen1_plant == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.plantsprite, NULL);
	} if (fi->ingredients.ramen1_shrimp == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.shrimpsprite, NULL);
	} if (fi->ingredients.ramen1_carrot == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.carrotsprite, NULL);
	} if (fi->ingredients.ramen1_graine == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.grainesprite, NULL);
	}
}

void draw_2ramen1(files_t *fi)
{
	if (fi->ingredients.ramen1_bol == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.bolsprite, NULL);
	} if (fi->ingredients.ramen1_pasta == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.pastasprite, NULL);
	} if (fi->ingredients.ramen1_sojaplant == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.sojaplantsprite, NULL);
	} if (fi->ingredients.ramen1_eggs == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.eggssprite, NULL);
	} if (fi->ingredients.ramen1_beaf == 1) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.beafsprite, NULL);
	}
	draw_3ramen1(fi);
}

void draw_ramen1(files_t *fi)
{
	event6(fi);
	if (fi->ingredients.ramen1 == 3) {
		sfRenderWindow_drawSprite(fi->window,
		fi->ingredients.ramen1sprite, NULL);
	} else
		draw_2ramen1(fi);
}

/*
** EPITECH PROJECT, 2017
** recipes.c
** File description:
** recipes.c
*/

#include "my.h"
#include "my_cook.h"

void check_recipes_ok2(files_t *fi, client_t *cl)
{
	if (fi->ingredients.ramen1 == 3) {
		remove_characters(cl);
		fi->ingredients.ramen1_carrot = 0;
		fi->ingredients.ramen1_pasta = 0;
		fi->ingredients.ramen1_shrimp = 0;
		fi->ingredients.ramen1_eggs = 0;
		fi->ingredients.ramen1_plant = 0;
		fi->ingredients.ramen1_bol = 0;
		fi->ingredients.ramen1_sojaplant = 0;
		fi->ingredients.ramen1_graine = 0;
		fi->ingredients.ramen1_beaf = 0;
		fi->ingredients.ramen1 = 0;
		fi->game.money += 30;
	}
	check_recipes_ok3(fi, cl);
}

void check_recipes_ok(files_t *fi, client_t *cl)
{
	if (fi->ingredients.sushi2 == 3) {
		remove_characters(cl);
		fi->ingredients.sushi2 = 0;
		fi->ingredients.sushi2_rice = 0;
		fi->ingredients.sushi2_salmon = 0;
		fi->game.money += 9;
	}
	if (fi->ingredients.sushi1 == 3) {
		remove_characters(cl);
		fi->ingredients.sushi1 = 0;
		fi->ingredients.sushi1_rice = 0;
		fi->ingredients.sushi1_salmon = 0;
		fi->ingredients.sushi1_cucumber = 0;
		fi->ingredients.sushi1_seaweed = 0;
		fi->game.money += 15;
	}
	check_recipes_ok2(fi, cl);
}

void recipe_enter(files_t *fi, client_t *cl)
{
	int a = 0;
	sfEvent event;

	while (a == 0 && fi->end == 0) {
		while (sfRenderWindow_pollEvent(fi->window, &event)) {
			if (event.type == sfEvtKeyPressed)
				a = event_recipes(fi, cl, event, a);
		}
		if (sfMusic_getStatus(fi->game.music) == 0)
			sfMusic_play(fi->game.music);
		characters_rand(cl, fi);
		draw(fi, cl);
		characters_move(cl, fi);
		draw_recipes2(fi, cl);
		sfRenderWindow_display(fi->window);
	}
	check_recipes_ok(fi, cl);
}

void rand_recipe(client_t *cl, files_t *fi, int i)
{
	cl->tab_recipes[i] = rand() % 4 + 1;
}

int check_recipes(files_t *fi, client_t *cl)
{
	if (cl->tab_recipes[fi->recipes.a] == -1)
		return (0);
	else
		recipe_enter(fi, cl);
}

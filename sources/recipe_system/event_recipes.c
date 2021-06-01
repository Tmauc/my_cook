/*
** EPITECH PROJECT, 2017
** event_recipes.c
** File description:
** event_recipes.c
*/

#include "my.h"
#include "my_cook.h"

void event_recipes_bolrice(files_t *fi, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyB:
			fi->ingredients.bolrice_bol = 1;
			remove_money(fi);
			break;
		case sfKeyR:
			fi->ingredients.bolrice_rice = 1;
			remove_money(fi);
			break;
	}
	if (fi->ingredients.bolrice_rice == 1 &&
	fi->ingredients.bolrice_bol == 1)
	fi->ingredients.bolrice = 3;
}

void event_recipes_sushi2(files_t *fi, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyR:
			fi->ingredients.sushi2_rice = 1;
			remove_money(fi);
			break;
		case sfKeyS:
			fi->ingredients.sushi2_salmon = 1;
			remove_money(fi);
			break;
	}
	if (fi->ingredients.sushi2_rice == 1 &&
	fi->ingredients.sushi2_salmon == 1)
	fi->ingredients.sushi2 = 3;
}

void event_recipes_sushi1(files_t *fi, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyR:
			fi->ingredients.sushi1_rice = 1;
			remove_money(fi);
			break;
		case sfKeyA:
			fi->ingredients.sushi1_salmon = 1;
			remove_money(fi);
			break;
		case sfKeyC:
			fi->ingredients.sushi1_cucumber = 1;
			remove_money(fi);
			break;
		case sfKeyS:
			fi->ingredients.sushi1_seaweed = 1;
			remove_money(fi);
			break;
	}
}

void check_ok(files_t *fi)
{
	if (fi->ingredients.sushi1_rice == 1 &&
	fi->ingredients.sushi1_salmon == 1 &&
	fi->ingredients.sushi1_seaweed == 1 &&
	fi->ingredients.sushi1_cucumber == 1)
	fi->ingredients.sushi1 = 3;
}

int event_recipes(files_t *fi, client_t *cl, sfEvent event, int a)
{
	switch (event.key.code) {
		case sfKeyReturn:
			a = 1;
			return (a);
	}
	a = 0;
	if (cl->tab_recipes[fi->recipes.a] == 1) {
		event_recipes_sushi1(fi, event);
	} if (cl->tab_recipes[fi->recipes.a] == 2) {
		event_recipes_sushi2(fi, event);
	} if (cl->tab_recipes[fi->recipes.a] == 3) {
		event_recipes_ramen3(fi, event);
	} if (cl->tab_recipes[fi->recipes.a] == 4) {
		event_recipes_bolrice(fi, event);
	}
	check_ok(fi);
	return (a);
}

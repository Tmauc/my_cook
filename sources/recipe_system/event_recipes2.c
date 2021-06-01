/*
** EPITECH PROJECT, 2017
** event_recipes2.c
** File description:
** event_recipes2.c
*/

#include "my.h"
#include "my_cook.h"

void remove_money(files_t *fi)
{
	if (fi->game.money > 0)
		fi->game.money -= 2;
	else
		fi->end = 1;
}

void event_recipes_ramen5(files_t *fi, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyE:
			fi->ingredients.ramen1_eggs = 1;
			remove_money(fi);
			break;
		case sfKeyR:
			fi->ingredients.ramen1_graine = 1;
			remove_money(fi);
			break;
	}
}

void event_recipes_ramen4(files_t *fi, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyC:
			fi->ingredients.ramen1_carrot = 1;
			remove_money(fi);
			break;
		case sfKeyA:
			fi->ingredients.ramen1_sojaplant = 1;
			remove_money(fi);
			break;
		case sfKeyP:
			fi->ingredients.ramen1_pasta = 1;
			remove_money(fi);
			break;
		case sfKeyH:
			fi->ingredients.ramen1_bol = 1;
			remove_money(fi);
			break;
	}
	event_recipes_ramen5(fi, event);
}

void event_recipes_ramen3(files_t *fi, sfEvent event)
{
	switch (event.key.code) {
		case sfKeyS:
			fi->ingredients.ramen1_shrimp = 1;
			remove_money(fi);
			break;
		case sfKeyB:
			fi->ingredients.ramen1_beaf = 1;
			remove_money(fi);
			break;
		case sfKeyI:
			fi->ingredients.ramen1_plant = 1;
			remove_money(fi);
			break;
	}
	event_recipes_ramen4(fi, event);
}

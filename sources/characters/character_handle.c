/*
** EPITECH PROJECT, 2018
** character_setup.c
** File description:
** character handle for the norme
*/

#include "my.h"
#include "my_cook.h"

void remove_characters(client_t *cl)
{
	if (cl->nbr_characters_ok < cl->nbr_characters)
		cl->nbr_characters_ok++;
}

int check_other_and_add2(client_t *cl)
{
	int a;
	int j = 0;

	a = rand() % 48 + 0;
	while (j != cl->nbr_characters) {
		if (a == cl->tab_characters[j]) {
			j = 0;
			a++;
		} else
			j++;
	}
	return (a);
}

int check_other_and_add(client_t *cl, files_t *fi)
{
	int i = 0;
	int j = 0;
	int a;

	while (cl->tab_characters[i] != -1)
		i++;
	if (i < 9) {
		a = check_other_and_add2(cl);
		if (a > 49)
			a = -1;
		else {
			rand_recipe(cl, fi, i);
			soundplay_bell(fi);
		}
		cl->tab_characters[i] = a;
	}
	return (0);
}

void remove_tab_case_characters_recipes(client_t *cl, int i)
{
	int j = 0;

	while (j < cl->nbr_characters) {
		cl->tab_characters[i] = cl->tab_characters[i + 1];
		cl->tab_recipes[i] = cl->tab_recipes[i + 1];
		i++;
		j++;
	}
}

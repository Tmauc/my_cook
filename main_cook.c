/*
** EPITECH PROJECT, 2018
** main_cook.c
** File description:
** main file for my_cook
*/

#include "my.h"
#include "my_cook.h"

void print_help(void)
{
	my_putstr("\e[1m");
	my_putstr("WELCOME TO MY_COOK BY LOUIS PLANCHER AND THOMAS MAUCONDUIT");
	my_putstr(" !\n\nUSAGE\e[0m");
	my_putstr("\n\t./my_cook\n\n");
	my_putstr("\e[1mOPTIONS (the game will not launch)\e[0m\n\t-h --help");
	my_putstr("\t\t\t\t\tDisplay this help.\n");
	my_putstr("\t-AR [$name] [$ingredient1,$ingredient2...]\tAdd a recipe.");
	my_putstr("\n\t-RR [$number]\t\t\t\t\tRemove a recipe.\n");
	my_putstr("\t-D [$number]\t\t\t\t\tDisactivate a recipe.\n\t");
	my_putstr("-A [$number]\t\t\t\t\tActivate a recipe.\n");
}

int arg(int ac, char **av)
{
	switch (ac) {
	case 3:
		if (!my_strcmp(av[1], "-D") && is_number(av[2]))
			disactive_recipe(str_to_int(av[2]));
		else if (!my_strcmp(av[1], "-A") && is_number(av[2]))
			activate_recipe(str_to_int(av[2]));
		return (0);
	case 4:
		if (!my_strcmp(av[1], "-AR"))
			add_recipes(av[2], av[3]);
		return (0);
	default:
		my_putstrror("Bad argument(s)\n");
		return (84);
	}
}

int main(int ac, char **av)
{
	switch (ac) {
	case 1:
		prog();
		return (0);
	case 2:
		if (!my_strcmp(av[1], "-h") || !my_strcmp(av[1], "--help"))
			print_help();
		return (0);
	default:
		return (arg(ac, av));
	}
}

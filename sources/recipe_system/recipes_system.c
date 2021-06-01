/*
** EPITECH PROJECT, 2018
** recipes_system.c
** File description:
** recipe main file
*/

#include "my.h"
#include "my_cook.h"

void add_recipes(char *name, char *ingredients)
{
	int i = 0;
	FILE *frecipes;

	frecipes = fopen("sources/.recipes", "aw");
	fwrite(name, sizeof(char), my_strlen(name), frecipes);
	fwrite("\n", sizeof(char), 1, frecipes);
	fwrite(ingredients, sizeof(char), my_strlen(ingredients), frecipes);
	fwrite("\n", sizeof(char), 1, frecipes);
	fclose(frecipes);
}

void activate_recipe(int nbr)
{
	char *file = read_file("sources/.recipes");
	char *result = my_calloc(sizeof(char) * (my_strlen(file)));
	FILE *frecipes;
	int i = 0;
	int done = 0;

	while (done * 2 - 1 < nbr && file[i] != '\0') {
		result[i] = file[i];
		if (result[i] == '\n')
			done += 1;
		i = i + 1;
	}
	for (i; file[i + 1] != '\0'; i++)
		result[i] = file[i + 1];
	frecipes = fopen("sources/.recipes", "w");
	fwrite(result, sizeof(char), my_strlen(result), frecipes);
	fclose(frecipes);
	free(file);
	free(result);
}

void disactive_recipe(int nbr)
{
	char *file = read_file("sources/.recipes");
	char *result = my_calloc(sizeof(char) * (my_strlen(file) + 2));
	FILE *frecipes;
	int i = 0;
	int done = 0;

	while (done * 2 - 1 < nbr && file[i] != '\0') {
		result[i] = file[i];
		if (result[i] == '\n')
			done += 1;
		i = i + 1;
	}
	result[i++] = '!';
	for (i; file[i - 1] != '\0'; i++)
		result[i] = file[i - 1];
	frecipes = fopen("sources/.recipes", "w");
	fwrite(result, sizeof(char), my_strlen(result), frecipes);
	fclose(frecipes);
	free(file);
	free(result);
}

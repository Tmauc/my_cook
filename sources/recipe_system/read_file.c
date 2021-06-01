/*
** EPITECH PROJECT, 2018
** recipes_system.c
** File description:
** read a file and return string
*/

#include "my.h"
#include "my_cook.h"

void fill_str(char *str, char chr)
{
	for (int i = 0; str[i] != '\0'; i++)
		str[i] = chr;
}

char *read_file(char *name)
{
	int tro = 1;
	FILE *frecipes;
	char *tmp = (char *)my_calloc(sizeof(char) * (10));
	char *result = "";

	frecipes = fopen(name, "r");
	while ((tro = fread(tmp, 1, 9, frecipes)) != 0) {
		result = my_strcat(result, tmp);
		fill_str(tmp, '\0');
	}
	free(tmp);
	fclose(frecipes);
	return (result);
}

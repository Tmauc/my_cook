/*
** EPITECH PROJECT, 2017
** int_to_str.c
** File description:
** int_to_str.c
*/

#include "my.h"

int my_nblen(int nb)
{
	int i = 0;

	while (nb != 0) {
		nb = nb / 10;
		i++;
	}
	return (i);
}

char *int_to_str(int ok)
{
	int i = my_nblen(ok);
	char *str = malloc(sizeof(char) * i + 2);

	str[i + 1] = '\0';
	str[i] = '\0';
	i = i - 1;
	if (ok == 0)
		str[0] = '0';
	if (ok < 0) {
		str[0] = '-';
		ok = ok * -1;
		i--;
	}
	while (ok != 0) {
		str[i] = ok % 10 + 48;
		ok = ok / 10;
		i--;
	}
	return (str);
}

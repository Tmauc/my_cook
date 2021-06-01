/*
** EPITECH PROJECT, 2018
** book_recipes_setup.c
** File description:
** setup the recipe struct
*/

#include "my.h"
#include "my_cook.h"

char **read_recipes(void)
{
	int fd;
	int i = 0;
	int iter = 0;
	char *temp;
	char **result;

	fd = open("sources/.recipes", O_RDONLY);
	while ((temp = get_next_line(fd)) != NULL) {
		free(temp);
		iter++;
	}
	close(fd);
	fd = open("sources/.recipes", O_RDONLY);
	result = malloc(sizeof(char *) * (iter + 1));
	for (; (result[i] = get_next_line(fd)) != NULL; i++);
	result[i] = NULL;
	return (result);
}

char *make_rtitle(char *line)
{
	return (&line[line[0] == '!' ? 1 : 0]);
}

char *make_ringre(char *line, int j, int first_w)
{
	char *result = malloc(sizeof(char) *
	(my_strlen(line) + (count_chr(line, ',')  + 1) * 3));

	for (int i = 0; line[i] != '\0'; i++) {
		if (first_w == 1) {
			result[j] = '-';
			result[j + 1] = ' ';
			j += 2;
			first_w = 0;
		} if (line[i] == ',') {
			result[j] = '\n';
			j += 1;
			first_w = 1;
		} else {
			result[j] = line[i];
			j++;
		}
	}
	result[j] = '\0';
	return (result);
}

book_recipes_t *verify_activated(book_recipes_t *crecipe, char *title)
{
	if (title[0] == '!')
		crecipe->activated = 0;
	else
		crecipe->activated = 1;
	return (crecipe);
}

int create_book(files_t *fi, int j, int iter)
{
	int i = 0;
	int first_w = 1;

	fi->book = malloc(sizeof(book_recipes_t *) *
	(count_lines(fi->frecipes) / 2 + 1));
	while (fi->frecipes[iter] != NULL) {
		fi->book[i] = malloc(sizeof(book_recipes_t));
		fi->book[i] = verify_activated(fi->book[i], fi->frecipes[iter]);
		fi->book[i]->title = make_rtitle(fi->frecipes[iter]);
		iter += 1;
		if (fi->frecipes[iter] == NULL) {
			fi = NULL;
			return (0);
		}
		fi->book[i]->ingre = make_ringre(fi->frecipes[iter], j, first_w);
		iter += 1;
		i++;
	}
	fi->book[i] = NULL;
	return (1);
}

/*
** EPITECH PROJECT, 2017
** charactersetup
** File description:
** charactersetup
*/

#include "my.h"
#include "my_cook.h"

sfSprite *create_sprite(char *bi, files_t *fi)
{
	sfTexture *texture = sfTexture_createFromFile(bi, NULL);;
	sfSprite *sprite = sfSprite_create();

	sfSprite_setTexture(sprite, texture, sfTrue);
	if (fi->menu.csquare.left < 2000)
		fi->menu.csquare.left += 200;
	else
		fi->menu.csquare.left = 0;
	sfSprite_setTextureRect(fi->menu.Csprite, fi->menu.csquare);
	return (sprite);
}

client_t putmachininmachin(client_t cl, sfIntRect square, sfVector2f square2)
{
	sfVector2f invers;

	cl.square = square;
	cl.square2 = square2;
	invers.x = 2;
	invers.y = 2;
	sfSprite_setTextureRect(cl.sprite, cl.square);
	sfSprite_scale(cl.sprite, invers);
	sfSprite_setPosition(cl.sprite, cl.square2);
	return (cl);
}

sfIntRect squaresetup(sfIntRect square)
{
	square.left = 0;
	square.top = 0;
	square.width = 190;
	square.height = 300;
	return (square);
}

client_t *create_all_characters(files_t *fi)
{
	int i;
	client_t *cl = malloc(sizeof(client_t) * 50);
	sfIntRect square;
	sfVector2f square2;

	square = squaresetup(square);
	square2.x = -200;
	square2.y = 246;
	for (i = 0; i != 49; i++) {
		sfRenderWindow_drawSprite(fi->window, fi->menu.Wsprite, NULL);
		sfRenderWindow_drawSprite(fi->window, fi->menu.Csprite, NULL);
		sfRenderWindow_display(fi->window);
		cl[i].sprite =
		create_sprite("ressources/pictures/game/characters_mycook.png",
		fi);
		cl[i] = putmachininmachin(cl[i], square, square2);
		square.left += 200;
	}
	return (cl);
}

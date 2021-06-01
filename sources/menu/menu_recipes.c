/*
** EPITECH PROJECT, 2017
** menu_recipes
** File description:
** menu_recipes
*/

#include "my.h"
#include "my_cook.h"

int menu_recipes_mousebutton(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 60 && event.mouseButton.x <= 255 &&
	event.mouseButton.y >= 915 && event.mouseButton.y <= 1025)
		return (0);
	if (event.mouseButton.x >= 1300 && event.mouseButton.x <= 1372 &&
	event.mouseButton.y >= 810 && event.mouseButton.y <= 862) {
		if (fi->menu.page_now < fi->menu.nbr_pages) {
			fi->menu.page_now++;
		}
		return (2);
	} if (event.mouseButton.x >= 370 && event.mouseButton.x <= 422 &&
	event.mouseButton.y >= 810 && event.mouseButton.y <= 862) {
		if (fi->menu.page_now > 1) {
			fi->menu.page_now--;
		}
	}
	return (2);
}

int menu_recipes_mousemove(files_t *fi, sfEvent event)
{
	if (event.mouseMove.x >= 60 && event.mouseMove.x <= 255 &&
	event.mouseMove.y >= 915 && event.mouseMove.y <= 1025) {
		fi->menu.rsquare.left = 198;
		return (0);
	} if (event.mouseMove.x >= 1300 && event.mouseMove.x <= 1372 &&
	event.mouseMove.y >= 810 && event.mouseMove.y <= 862) {
		fi->menu.fsquare.left = 72;
		return (0);
	} if (event.mouseMove.x >= 370 && event.mouseMove.x <= 422 &&
	event.mouseMove.y >= 810 && event.mouseMove.y <= 862) {
		fi->menu.f2square.left = 72;
		return (0);
	} else {
		fi->menu.rsquare.left = 0;
		fi->menu.fsquare.left = 0;
		fi->menu.f2square.left = 0;
		return (0);
	}
}

void draw_page(files_t *fi)
{
	if (fi->menu.page_now > 1)
		fi->menu.mpsquare.left = 1920;
	else
		fi->menu.mpsquare.left = 0;
	sfSprite_setTextureRect(fi->menu.Mpsprite, fi->menu.mpsquare);
	sfSprite_setTextureRect(fi->menu.rsprite, fi->menu.rsquare);
	sfSprite_setTextureRect(fi->menu.fsprite, fi->menu.fsquare);
	sfSprite_setTextureRect(fi->menu.f2sprite, fi->menu.f2square);
	sfRenderWindow_drawSprite(fi->window, fi->menu.Mpsprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu.rsprite, NULL);
	if (fi->menu.page_now == 1 && 1 != fi->menu.nbr_pages)
		sfRenderWindow_drawSprite(fi->window, fi->menu.fsprite, NULL);
	if (fi->menu.page_now > 1 && fi->menu.page_now < fi->menu.nbr_pages) {
		sfRenderWindow_drawSprite(fi->window, fi->menu.fsprite, NULL);
		sfRenderWindow_drawSprite(fi->window, fi->menu.f2sprite, NULL);
	} if (fi->menu.page_now == fi->menu.nbr_pages && 1 != fi->menu.page_now)
		sfRenderWindow_drawSprite(fi->window, fi->menu.f2sprite, NULL);
}

void recipes(files_t *fi)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			fi->menu.a = 5;
		else if (event.type == sfEvtMouseButtonPressed)
			fi->menu.a = menu_recipes_mousebutton(event, fi);
		else {
			menu_recipes_mousemove(fi, event);
		}
	}
	if (sfMusic_getStatus(fi->menu.music) == 0)
		sfMusic_play(fi->menu.music);
	draw_page(fi);
	draw_recipes_book(fi, fi->menu.page_now);
	sfRenderWindow_display(fi->window);
}

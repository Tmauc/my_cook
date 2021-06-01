/*
** EPITECH PROJECT, 2017
** pause_menu_setting.c
** File description:
** pause_menu_setting.c
*/

#include "my.h"
#include "my_cook.h"

int pause_setting_mousebutton2(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 1275 && event.mouseButton.x <= 1330 &&
	event.mouseButton.y >= 280 && event.mouseButton.y <= 330) {
		if (fi->menu_buttons.ofsquare.left == 0) {
			set_volume_off(fi);
			fi->menu_buttons.ofsquare.left = 138;
		} else if (fi->menu_buttons.ofsquare.left == 138) {
			set_volume_on(fi);
			fi->menu_buttons.ofsquare.left = 0;
		}
		return (2);
	} else {
		fi->menu.vsquare.left = 0;
		return (2);
	}
}

int pause_setting_mousebutton(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 1782 && event.mouseButton.x <= 1879 &&
	event.mouseButton.y >= 898 && event.mouseButton.y <= 996) {
		return (1);
	} if (event.mouseButton.x >= 1275 && event.mouseButton.x <= 1330 &&
	event.mouseButton.y >= 183 && event.mouseButton.y <= 238) {
		fi->menu.vsquare.left = 165;
		fi->sounds.master_volume += 10;
		change_volume(fi);
		return (2);
	}
	if (event.mouseButton.x >= 1275 && event.mouseButton.x <= 1330 &&
	event.mouseButton.y >= 245 && event.mouseButton.y <= 258) {
		fi->menu.vsquare.left = 220;
		fi->sounds.master_volume -= 10;
		change_volume(fi);
		return (2);
	}
	return (pause_setting_mousebutton2(event, fi));
}

int pause_setting_mousemove(files_t *fi, sfEvent event)
{
	if (event.mouseMove.x >= 1782 && event.mouseMove.x <= 1879 &&
	event.mouseMove.y >= 898 && event.mouseMove.y <= 996) {
		fi->menu.ssquare.left = 1920;
		return (0);
	} if (event.mouseMove.x >= 1275 && event.mouseMove.x <= 1330 &&
	event.mouseMove.y >= 183 && event.mouseMove.y <= 238) {
		fi->menu.vsquare.left = 55;
		return (0);
	} if (event.mouseMove.x >= 1275 && event.mouseMove.x <= 1330 &&
	event.mouseMove.y >= 245 && event.mouseMove.y <= 258) {
		fi->menu.vsquare.left = 110;
		return (0);
	} else {
		fi->menu.ssquare.left = 0;
		fi->menu.vsquare.left = 0;
		return (0);
	}
}

void draw_pause_menu_settings(files_t *fi)
{
	sfRenderWindow_drawSprite(fi->window, fi->menu.Ssprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu.Vsprite, NULL);
	sfRenderWindow_drawSprite(fi->window, fi->menu_buttons.ofsprite, NULL);
	sfRenderWindow_drawText(fi->window, fi->menu.text, NULL);
	sfRenderWindow_display(fi->window);
}

void pause_menu_settings(files_t *fi)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			fi->menu.b = 4;
		else if (event.type == sfEvtMouseButtonPressed) {
			fi->menu.b = pause_setting_mousebutton(event, fi);
			sfSprite_setTextureRect(fi->menu.Vsprite, fi->menu.vsquare);
		} else {
			pause_setting_mousemove(fi, event);
			sfSprite_setTextureRect(fi->menu.Ssprite, fi->menu.ssquare);
			sfSprite_setTextureRect(fi->menu.Vsprite, fi->menu.vsquare);
			sfSprite_setTextureRect(fi->menu_buttons.ofsprite,
			fi->menu_buttons.ofsquare);
		}
	}
	if (sfMusic_getStatus(fi->game.music) == 0)
		sfMusic_play(fi->game.music);
	draw_pause_menu_settings(fi);
}

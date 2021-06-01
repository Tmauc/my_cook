/*
** EPITECH PROJECT, 2017
** menu_setting
** File description:
** menu_setting
*/

#include "my.h"
#include "my_cook.h"

void text_setting(files_t *fi)
{
	char *str = int_to_str(fi->sounds.master_volume);

	sfText_setString(fi->menu.text, str);
	sfText_setPosition(fi->menu.text, fi->menu.textsquare2);
	sfRenderWindow_drawText(fi->window, fi->menu.text, NULL);
}

int menu_setting_mousebutton2(sfEvent event, files_t *fi)
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
		return (3);
	} else {
		fi->menu.vsquare.left = 0;
		return (3);
	}
}

int menu_setting_mousebutton(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 1782 && event.mouseButton.x <= 1879 &&
	event.mouseButton.y >= 898 && event.mouseButton.y <= 996)
		return (0);
	if (event.mouseButton.x >= 1275 && event.mouseButton.x <= 1330 &&
	event.mouseButton.y >= 183 && event.mouseButton.y <= 238) {
		fi->menu.vsquare.left = 165;
		fi->sounds.master_volume += 10;
		change_volume(fi);
		return (3);
	}
	if (event.mouseButton.x >= 1275 && event.mouseButton.x <= 1330 &&
	event.mouseButton.y >= 245 && event.mouseButton.y <= 258) {
		fi->menu.vsquare.left = 220;
		fi->sounds.master_volume -= 10;
		change_volume(fi);
		return (3);
	}
	return (menu_setting_mousebutton2(event, fi));
}

int menu_setting_mousemove(files_t *fi, sfEvent event)
{
	if (event.mouseMove.x >= 1782 && event.mouseMove.x <= 1879 &&
	event.mouseMove.y >= 898 && event.mouseMove.y <= 996) {
		fi->menu.ssquare.left = 1920;
		return (0);
	}
	if (event.mouseMove.x >= 1275 && event.mouseMove.x <= 1330 &&
	event.mouseMove.y >= 183 && event.mouseMove.y <= 238) {
		fi->menu.vsquare.left = 55;
		return (0);
	}
	if (event.mouseMove.x >= 1275 && event.mouseMove.x <= 1330 &&
	event.mouseMove.y >= 245 && event.mouseMove.y <= 258) {
		fi->menu.vsquare.left = 110;
		return (0);
	} else {
		fi->menu.ssquare.left = 0;
		fi->menu.vsquare.left = 0;
		return (0);
	}
}

void setting(files_t *fi)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(fi->window, &event)) {
		if (event.type == sfEvtClosed)
			fi->menu.a = 5;
		else if (event.type == sfEvtMouseButtonPressed) {
			fi->menu.a = menu_setting_mousebutton(event, fi);
			sfSprite_setTextureRect(fi->menu.Vsprite,
			fi->menu.vsquare);
		} else {
			menu_setting_mousemove(fi, event);
			sfSprite_setTextureRect(fi->menu.Ssprite,
			fi->menu.ssquare);
			sfSprite_setTextureRect(fi->menu.Vsprite,
			fi->menu.vsquare);
			sfSprite_setTextureRect(fi->menu_buttons.ofsprite,
			fi->menu_buttons.ofsquare);
		}
	}
	draw_menu_settings(fi);
}

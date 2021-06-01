/*
** EPITECH PROJECT, 2017
** menu2
** File description:
** menu2
*/

#include "my.h"
#include "my_cook.h"

int menu_mousebutton2(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 1618 && event.mouseButton.x <= 1875 &&
	event.mouseButton.y >= 245 && event.mouseButton.y <= 299) {
		fi->menu_buttons.ssquare.left = 510;
		soundplay_gong(fi);
		return (3);
	} if (event.mouseButton.x >= 1720 && event.mouseButton.x <= 1875 &&
	event.mouseButton.y >= 320 && event.mouseButton.y <= 375) {
		fi->menu_buttons.qsquare.left = 308;
		soundplay_gong(fi);
		return (5);
	} else
		return (0);
}

int menu_mousebutton(sfEvent event, files_t *fi)
{
	if (event.mouseButton.x >= 1721 && event.mouseButton.x <= 1880 &&
	event.mouseButton.y >= 30 && event.mouseButton.y <= 90) {
		fi->menu_buttons.playsquare.left = 316;
		soundplay_gong(fi);
		return (1);
	} if (event.mouseButton.x >= 1647 && event.mouseButton.x <= 1879 &&
	event.mouseButton.y >= 108 && event.mouseButton.y <= 167) {
		fi->menu_buttons.recipessquare.left = 462;
		soundplay_gong(fi);
		return (2);
	} if (event.mouseButton.x >= 1475 && event.mouseButton.x <= 1887 &&
	event.mouseButton.y >= 176 && event.mouseButton.y <= 230) {
		fi->menu_buttons.htpsquare.left = 824;
		soundplay_gong(fi);
		return (0);
	}
	return (menu_mousebutton2(event, fi));
}

int menu_mousemove2(files_t *fi, sfEvent event)
{
	if (event.mouseMove.x >= 1618 && event.mouseMove.x <= 1875 &&
	event.mouseMove.y >= 245 && event.mouseMove.y <= 299) {
		fi->menu_buttons.ssquare.left = 255;
		return (0);
	} if (event.mouseMove.x >= 1720 && event.mouseMove.x <= 1875 &&
	event.mouseMove.y >= 320 && event.mouseMove.y <= 375) {
		fi->menu_buttons.qsquare.left = 154;
		return (0);
	} else {
		fi->menu_buttons.playsquare.left = 0;
		fi->menu_buttons.recipessquare.left = 0;
		fi->menu_buttons.htpsquare.left = 0;
		fi->menu_buttons.ssquare.left = 0;
		fi->menu_buttons.qsquare.left = 0;
		return (1);
	}
}

int menu_mousemove(files_t *fi, sfEvent event)
{
	if (event.type == sfEvtMouseMoved) {
		if (event.mouseMove.x >= 1721 && event.mouseMove.x <= 1880 &&
		event.mouseMove.y >= 30 && event.mouseMove.y <= 90) {
			fi->menu_buttons.playsquare.left = 158;
			return (0);
		} if (event.mouseMove.x >= 1647 && event.mouseMove.x <= 1879 &&
		event.mouseMove.y >= 108 && event.mouseMove.y <= 167) {
			fi->menu_buttons.recipessquare.left = 231;
			return (0);
		} if (event.mouseMove.x >= 1475 && event.mouseMove.x <= 1887 &&
		event.mouseMove.y >= 176 && event.mouseMove.y <= 230) {
			fi->menu_buttons.htpsquare.left = 412;
			return (0);
		} if (menu_mousemove2(fi, event) == 0)
			return (0);
	}
	return (1);
}

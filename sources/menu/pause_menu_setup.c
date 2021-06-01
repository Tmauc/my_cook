/*
** EPITECH PROJECT, 2017
** pause_menu.c
** File description:
** pause_menu.c
*/

#include "my.h"
#include "my_cook.h"

void spriteset_pause_menu(files_t *fi)
{
	sfSprite_setTexture(fi->menu.psprite, fi->menu.ptexture, sfTrue);
}

void squaresetup_pause_menu(files_t *fi)
{
	fi->menu.b = 1;
	fi->menu.psquare.left = 0;
	fi->menu.psquare.top = 0;
	fi->menu.psquare.width = 600;
	fi->menu.psquare.height = 1080;
	fi->menu.psquare2.x = 0;
	fi->menu.psquare2.y = 0;
	sfSprite_setTextureRect(fi->menu.psprite, fi->menu.psquare);
	sfSprite_setPosition(fi->menu.psprite, fi->menu.psquare2);
}

void pause_menu_setup(files_t *fi)
{
	fi->menu.ptexture =
	sfTexture_createFromFile("ressources/pictures/menu/pause_menu.png",
	NULL);
	fi->menu.psprite = sfSprite_create();
	squaresetup_pause_menu(fi);
	spriteset_pause_menu(fi);
	sfSprite_setTextureRect(fi->menu.psprite, fi->menu.psquare);
}

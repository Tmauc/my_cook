/*
** EPITECH PROJECT, 2017
** menu_setting_setup
** File description:
** menu_setting_setup
*/

#include "my.h"
#include "my_cook.h"

void spriteset_menu_setting(files_t *fi)
{
	sfSprite_setTexture(fi->menu.Ssprite, fi->menu.Stexture, sfTrue);
	sfSprite_setTexture(fi->menu.Vsprite, fi->menu.Vtexture, sfTrue);
	sfSprite_setTexture(fi->menu_buttons.ofsprite,
	fi->menu_buttons.oftexture, sfTrue);
}

void squaresetup_menu_setting2(files_t *fi)
{
	sfVector2f invers;

	invers.x = 0.5;
	invers.y = 0.5;
	fi->menu_buttons.ofsquare.left = 0;
	fi->menu_buttons.ofsquare.top = 0;
	fi->menu_buttons.ofsquare.width = 138;
	fi->menu_buttons.ofsquare.height = 108;
	fi->menu_buttons.ofsquare2.x = 1275;
	fi->menu_buttons.ofsquare2.y = 280;
	sfSprite_scale(fi->menu_buttons.ofsprite, invers);
	sfSprite_setTextureRect(fi->menu_buttons.ofsprite,
	fi->menu_buttons.ofsquare);
	sfSprite_setPosition(fi->menu_buttons.ofsprite,
	fi->menu_buttons.ofsquare2);
}

void squaresetup_menu_setting(files_t *fi)
{
	fi->menu.a = 0;
	fi->menu.ssquare.left = 0;
	fi->menu.ssquare.top = 0;
	fi->menu.ssquare.width = 1920;
	fi->menu.ssquare.height = 1080;
	fi->menu.ssquare2.x = 0;
	fi->menu.ssquare2.y = -50;
	fi->menu.vsquare.left = 0;
	fi->menu.vsquare.top = 0;
	fi->menu.vsquare.width = 55;
	fi->menu.vsquare.height = 75;
	fi->menu.vsquare2.x = 1275;
	fi->menu.vsquare2.y = 183;
	squaresetup_menu_setting2(fi);
	sfSprite_setTextureRect(fi->menu.Ssprite, fi->menu.ssquare);
	sfSprite_setPosition(fi->menu.Ssprite, fi->menu.ssquare2);
	sfSprite_setTextureRect(fi->menu.Vsprite, fi->menu.vsquare);
	sfSprite_setPosition(fi->menu.Vsprite, fi->menu.vsquare2);
}

void textsetting(files_t *fi)
{
	fi->menu.text = sfText_create();
	sfFont *font = sfFont_createFromFile("ressources/font/font.ttf");

	fi->menu.textsquare2.x = 1120;
	fi->menu.textsquare2.y = 160;
	sfText_setColor(fi->menu.text, sfBlack);
	sfText_setFont(fi->menu.text, font);
	sfText_setCharacterSize(fi->menu.text, 100);
	sfText_setPosition(fi->menu.text, fi->menu.textsquare2);
}

void menu_setting_setup(files_t *fi)
{
	fi->menu.Stexture =
	sfTexture_createFromFile("ressources/pictures/menu/menu_setting.png",
	NULL);
	fi->menu.Ssprite = sfSprite_create();
	fi->menu.Vtexture =
	sfTexture_createFromFile("ressources/pictures/menu/volume/volume.png",
	NULL);
	fi->menu.Vsprite = sfSprite_create();
	fi->menu_buttons.oftexture =
	sfTexture_createFromFile("ressources/pictures/menu/volume/volume2.png",
	NULL);
	fi->menu_buttons.ofsprite = sfSprite_create();
	squaresetup_menu_setting(fi);
	spriteset_menu_setting(fi);
	textsetting(fi);
	sfSprite_setTextureRect(fi->menu.Ssprite, fi->menu.ssquare);
	sfSprite_setTextureRect(fi->menu.Vsprite, fi->menu.vsquare);
	sfSprite_setTextureRect(fi->menu_buttons.ofsprite,
	fi->menu_buttons.ofsquare);
}

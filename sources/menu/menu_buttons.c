/*
** EPITECH PROJECT, 2017
** menu_buttons_setup
** File description:
** menu_buttons_setup
*/

#include "my.h"
#include "my_cook.h"

void spriteset_menu_buttons(files_t *fi)
{
	sfSprite_setTexture(fi->menu_buttons.playsprite,
	fi->menu_buttons.playtexture, sfTrue);
	sfSprite_setTexture(fi->menu_buttons.recipessprite,
	fi->menu_buttons.recipestexture, sfTrue);
	sfSprite_setTexture(fi->menu_buttons.htpsprite,
	fi->menu_buttons.htptexture, sfTrue);
	sfSprite_setTexture(fi->menu_buttons.ssprite,
	fi->menu_buttons.stexture, sfTrue);
	sfSprite_setTexture(fi->menu_buttons.qsprite,
	fi->menu_buttons.qtexture, sfTrue);
}

void squaresetup_menu_buttons2(files_t *fi)
{
	fi->menu_buttons.ssquare.left = 0;
	fi->menu_buttons.ssquare.top = 0;
	fi->menu_buttons.ssquare.width = 255;
	fi->menu_buttons.ssquare.height = 53;
	fi->menu_buttons.ssquare2.x = 1618;
	fi->menu_buttons.ssquare2.y = 245;
	fi->menu_buttons.qsquare.left = 0;
	fi->menu_buttons.qsquare.top = 0;
	fi->menu_buttons.qsquare.width = 154;
	fi->menu_buttons.qsquare.height = 56;
	fi->menu_buttons.qsquare2.x = 1720;
	fi->menu_buttons.qsquare2.y = 320;
}

void squaresetup_menu_buttons(files_t *fi)
{
	fi->menu_buttons.playsquare.left = 0;
	fi->menu_buttons.playsquare.top = 0;
	fi->menu_buttons.playsquare.width = 158;
	fi->menu_buttons.playsquare.height = 60;
	fi->menu_buttons.playsquare2.x = 1721;
	fi->menu_buttons.playsquare2.y = 30;
	fi->menu_buttons.recipessquare.left = 0;
	fi->menu_buttons.recipessquare.top = 0;
	fi->menu_buttons.recipessquare.width = 231;
	fi->menu_buttons.recipessquare.height = 53;
	fi->menu_buttons.recipessquare2.x = 1647;
	fi->menu_buttons.recipessquare2.y = 108;
	fi->menu_buttons.htpsquare.left = 0;
	fi->menu_buttons.htpsquare.top = 0;
	fi->menu_buttons.htpsquare.width = 412;
	fi->menu_buttons.htpsquare.height = 53;
	fi->menu_buttons.htpsquare2.x = 1475;
	fi->menu_buttons.htpsquare2.y = 176;
	squaresetup_menu_buttons2(fi);
}

void menu_buttons_textrect(files_t *fi)
{
	sfSprite_setTextureRect(fi->menu_buttons.playsprite,
	fi->menu_buttons.playsquare);
	sfSprite_setTextureRect(fi->menu_buttons.recipessprite,
	fi->menu_buttons.recipessquare);
	sfSprite_setTextureRect(fi->menu_buttons.htpsprite,
	fi->menu_buttons.htpsquare);
	sfSprite_setTextureRect(fi->menu_buttons.ssprite,
	fi->menu_buttons.ssquare);
	sfSprite_setTextureRect(fi->menu_buttons.qsprite,
	fi->menu_buttons.qsquare);
	sfSprite_setPosition(fi->menu_buttons.playsprite,
	fi->menu_buttons.playsquare2);
	sfSprite_setPosition(fi->menu_buttons.recipessprite,
	fi->menu_buttons.recipessquare2);
	sfSprite_setPosition(fi->menu_buttons.htpsprite,
	fi->menu_buttons.htpsquare2);
	sfSprite_setPosition(fi->menu_buttons.ssprite,
	fi->menu_buttons.ssquare2);
	sfSprite_setPosition(fi->menu_buttons.qsprite,
	fi->menu_buttons.qsquare2);
}

void menu_buttons_setup(files_t *fi)
{
	fi->menu_buttons.playtexture = sfTexture_createFromFile(
	"ressources/pictures/menu/buttons/button_play.png", NULL);
	fi->menu_buttons.playsprite = sfSprite_create();
	fi->menu_buttons.recipestexture = sfTexture_createFromFile(
	"ressources/pictures/menu/buttons/button_recipes.png", NULL);
	fi->menu_buttons.recipessprite = sfSprite_create();
	fi->menu_buttons.htptexture = sfTexture_createFromFile(
	"ressources/pictures/menu/buttons/button_howtoplay.png", NULL);
	fi->menu_buttons.htpsprite = sfSprite_create();
	fi->menu_buttons.stexture = sfTexture_createFromFile(
	"ressources/pictures/menu/buttons/button_options.png", NULL);
	fi->menu_buttons.ssprite = sfSprite_create();
	fi->menu_buttons.qtexture = sfTexture_createFromFile(
	"ressources/pictures/menu/buttons/button_quit.png", NULL);
	fi->menu_buttons.qsprite = sfSprite_create();
	squaresetup_menu_buttons(fi);
	spriteset_menu_buttons(fi);
	menu_buttons_textrect(fi);
}

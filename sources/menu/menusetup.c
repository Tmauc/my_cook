/*
** EPITECH PROJECT, 2017
** menusetup
** File description:
** menusetup
*/

#include "my.h"
#include "my_cook.h"

void soundmenu(files_t *fi)
{
	fi->menu.music = sfMusic_createFromFile(
	"ressources/music/menu_song.ogg");
	sfMusic_play(fi->menu.music);
	sfMusic_setVolume(fi->menu.music, fi->sounds.volume_menu);
}

void spriteset_menu(files_t *fi)
{
	sfSprite_setTexture(fi->menu.Msprite, fi->menu.Mtexture, sfTrue);
	sfSprite_setTexture(fi->menu.Csprite, fi->menu.Ctexture, sfTrue);
	sfSprite_setTexture(fi->menu.Wsprite, fi->menu.Wtexture, sfTrue);
}

void squaresetup_menu(files_t *fi)
{
	fi->menu.a = 0;
	fi->menu.a = 0;
	fi->menu.msquare.left = 0;
	fi->menu.msquare.top = 0;
	fi->menu.msquare.width = 1920;
	fi->menu.msquare.height = 1080;
	fi->menu.csquare.left = 0;
	fi->menu.csquare.top = 0;
	fi->menu.csquare.width = 200;
	fi->menu.csquare.height = 375;
	fi->menu.csquare2.x = 880;
	fi->menu.csquare2.y = 300;
	fi->menu.wsquare.left = 0;
	fi->menu.wsquare.top = 0;
	fi->menu.wsquare.width = 1920;
	fi->menu.wsquare.height = 1080;
	sfSprite_setTextureRect(fi->menu.Msprite, fi->menu.msquare);
	sfSprite_setTextureRect(fi->menu.Csprite, fi->menu.csquare);
	sfSprite_setTextureRect(fi->menu.Wsprite, fi->menu.wsquare);
	sfSprite_setPosition(fi->menu.Csprite, fi->menu.csquare2);
}

void menu_setup(files_t *fi)
{
	fi->menu.Mtexture =
	sfTexture_createFromFile("ressources/pictures/menu/menu.png", NULL);
	fi->menu.Msprite = sfSprite_create();
	fi->menu.Ctexture =
	sfTexture_createFromFile("ressources/pictures/menu/loading/loading.png",
	NULL);
	fi->menu.Csprite = sfSprite_create();
	fi->menu.Wtexture =
	sfTexture_createFromFile("ressources/pictures/menu/loading/white.png",
	NULL);
	fi->menu.Wsprite = sfSprite_create();
	squaresetup_menu(fi);
	spriteset_menu(fi);
	soundmenu(fi);
	menu_buttons_setup(fi);
	sfSprite_setTextureRect(fi->menu.Msprite, fi->menu.msquare);
	sfSprite_setTextureRect(fi->menu.Csprite, fi->menu.csquare);
	sfSprite_setTextureRect(fi->menu.Wsprite, fi->menu.wsquare);
}

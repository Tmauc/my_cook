/*
** EPITECH PROJECT, 2017
** gamesetup
** File description:
** gamesetup
*/

#include "my.h"
#include "my_cook.h"

void text_game_setting(files_t *fi)
{
	fi->game.text = sfText_create();
	fi->game.money_text = sfText_create();
	sfFont *font = sfFont_createFromFile("ressources/font/font.ttf");
	sfFont *font2 = sfFont_createFromFile("ressources/font/font2.otf");

	fi->game.textsquare2.x = 180;
	fi->game.textsquare2.y = 100;
	fi->game.moneytextsquare2.x = 1705;
	fi->game.moneytextsquare2.y = -50;
	sfText_setColor(fi->game.text, sfBlack);
	sfText_setFont(fi->game.text, font);
	sfText_setCharacterSize(fi->game.text, 30);
	sfText_setPosition(fi->game.text, fi->game.textsquare2);
	sfText_setColor(fi->game.money_text, sfBlack);
	sfText_setFont(fi->game.money_text, font2);
	sfText_setCharacterSize(fi->game.money_text, 150);
	sfText_setPosition(fi->game.money_text, fi->game.moneytextsquare2);
}

void soundgame(files_t *fi)
{
	fi->game.music = sfMusic_createFromFile(
	"ressources/music/game_song.ogg");
	sfMusic_setVolume(fi->game.music, fi->sounds.volume_game);
}

void spriteset_game(files_t *fi)
{
	sfSprite_setTexture(fi->game.Gsprite, fi->game.Gtexture, sfTrue);
}

void squaresetup_game(files_t *fi)
{
	fi->a = 1;
	fi->game.a = 0;
	fi->game.money = 50;
	fi->game.gsquare.left = 0;
	fi->game.gsquare.top = 0;
	fi->game.gsquare.width = 1920;
	fi->game.gsquare.height = 1080;
	sfSprite_setTextureRect(fi->game.Gsprite, fi->game.gsquare);
}

int game_setup(files_t *fi)
{
	fi->game.Gtexture =
	sfTexture_createFromFile("ressources/pictures/game/background.png",
	NULL);
	fi->game.Gsprite = sfSprite_create();
	squaresetup_game(fi);
	spriteset_game(fi);
	text_game_setting(fi);
	soundgame(fi);
	if (fi == NULL)
		return (0);
	sfSprite_setTextureRect(fi->game.Gsprite, fi->game.gsquare);
	return (1);
}

/*
** EPITECH PROJECT, 2017
** menu_recipes_setup
** File description:
** menu_recipes_setup
*/

#include "my.h"
#include "my_cook.h"

void spriteset_menu_recipes(files_t *fi)
{
	sfSprite_setTexture(fi->menu.Mpsprite, fi->menu.Mptexture, sfTrue);
	sfSprite_setTexture(fi->menu.fsprite, fi->menu.ftexture, sfTrue);
	sfSprite_setTexture(fi->menu.f2sprite, fi->menu.f2texture, sfTrue);
	sfSprite_setTexture(fi->menu.rsprite, fi->menu.rtexture, sfTrue);
}

void squaresetup_menu_recipes2(files_t *fi)
{
	fi->menu.f2square.left = 0;
	fi->menu.f2square.top = 0;
	fi->menu.f2square.width = 72;
	fi->menu.f2square.height = 52;
	fi->menu.f2square2.x = 370;
	fi->menu.f2square2.y = 810;
	fi->menu.rsquare.left = 0;
	fi->menu.rsquare.top = 0;
	fi->menu.rsquare.width = 198;
	fi->menu.rsquare.height = 115;
	fi->menu.rsquare2.x = 60;
	fi->menu.rsquare2.y = 865;
	sfSprite_setTextureRect(fi->menu.fsprite, fi->menu.fsquare);
	sfSprite_setTextureRect(fi->menu.f2sprite, fi->menu.f2square);
	sfSprite_setTextureRect(fi->menu.rsprite, fi->menu.rsquare);
	sfSprite_setPosition(fi->menu.fsprite, fi->menu.fsquare2);
	sfSprite_setPosition(fi->menu.f2sprite, fi->menu.f2square2);
	sfSprite_setPosition(fi->menu.rsprite, fi->menu.rsquare2);
}

void squaresetup_menu_recipes(files_t *fi)
{
	fi->menu.a = 0;
	fi->menu.nbr_pages = (count_lines(fi->frecipes) / 2 + 1) / 4 + 1;
	fi->menu.page_now = 1;
	fi->menu.mpsquare.left = 0;
	fi->menu.mpsquare.top = 50;
	fi->menu.mpsquare.width = 1920;
	fi->menu.mpsquare.height = 1080;
	fi->menu.fsquare.left = 0;
	fi->menu.fsquare.top = 0;
	fi->menu.fsquare.width = 72;
	fi->menu.fsquare.height = 52;
	fi->menu.fsquare2.x = 1300;
	fi->menu.fsquare2.y = 810;
	squaresetup_menu_recipes2(fi);
	sfSprite_setTextureRect(fi->menu.Mpsprite, fi->menu.mpsquare);
}

void set_texturerect_recipe_menu(files_t *fi)
{
	sfSprite_setTextureRect(fi->menu.Mpsprite, fi->menu.mpsquare);
	sfSprite_setTextureRect(fi->menu.rsprite, fi->menu.rsquare);
	sfSprite_setTextureRect(fi->menu.fsprite, fi->menu.fsquare);
	sfSprite_setTextureRect(fi->menu.f2sprite, fi->menu.f2square);
}

void menu_recipes_setup(files_t *fi)
{
	fi->menu.Mptexture =
	sfTexture_createFromFile("ressources/pictures/menu/menu_recipes.png",
	NULL);
	fi->menu.Mpsprite = sfSprite_create();
	fi->menu.rtexture =
	sfTexture_createFromFile("ressources/pictures/menu/buttons/return.png",
	NULL);
	fi->menu.rsprite = sfSprite_create();
	fi->menu.ftexture =
	sfTexture_createFromFile("ressources/pictures/menu/buttons/fleche.png",
	NULL);
	fi->menu.fsprite = sfSprite_create();
	fi->menu.f2texture =
	sfTexture_createFromFile("ressources/pictures/menu/buttons/fleche2.png",
	NULL);
	fi->menu.f2sprite = sfSprite_create();
	squaresetup_menu_recipes(fi);
	spriteset_menu_recipes(fi);
	setup_book_text(fi);
	set_texturerect_recipe_menu(fi);
}

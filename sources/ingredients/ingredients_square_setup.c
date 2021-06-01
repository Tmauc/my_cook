/*
** EPITECH PROJECT, 2018
** ingredient_square_setup.c
** File description:
** squaresetup ingredients
*/

#include "my.h"
#include "my_cook.h"

void squaresetup_ingredients3(files_t *fi)
{
	fi->ingredients.cucumbersquare.left = 0;
	fi->ingredients.cucumbersquare.top = 0;
	fi->ingredients.cucumbersquare.width = 1920;
	fi->ingredients.cucumbersquare.height = 1080;
	fi->ingredients.cucumbersquare2.x = 500;
	fi->ingredients.cucumbersquare2.y = 900;
	fi->ingredients.seaweedsquare.left = 0;
	fi->ingredients.seaweedsquare.top = 0;
	fi->ingredients.seaweedsquare.width = 1920;
	fi->ingredients.seaweedsquare.height = 1080;
	fi->ingredients.seaweedsquare2.x = 700;
	fi->ingredients.seaweedsquare2.y = 855;
	sfSprite_setPosition(fi->ingredients.cucumbersprite,
	fi->ingredients.cucumbersquare2);
	sfSprite_setPosition(fi->ingredients.seaweedsprite,
	fi->ingredients.seaweedsquare2);
	sfSprite_setTextureRect(fi->ingredients.cucumbersprite,
	fi->ingredients.cucumbersquare);
	sfSprite_setTextureRect(fi->ingredients.seaweedsprite,
	fi->ingredients.seaweedsquare);
}

void set_texturerect_squaresetup2(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.rice2sprite,
	fi->ingredients.rice2square2);
	sfSprite_setPosition(fi->ingredients.salmon2sprite,
	fi->ingredients.salmon2square2);
	sfSprite_setTextureRect(fi->ingredients.rice2sprite,
	fi->ingredients.rice2square);
	sfSprite_setTextureRect(fi->ingredients.salmon2sprite,
	fi->ingredients.salmon2square);
}

void squaresetup_ingredients2(files_t *fi)
{
	fi->ingredients.rice2square.left = 0;
	fi->ingredients.rice2square.top = 0;
	fi->ingredients.rice2square.width = 1920;
	fi->ingredients.rice2square.height = 1080;
	fi->ingredients.rice2square2.x = 500;
	fi->ingredients.rice2square2.y = 855;
	fi->ingredients.salmon2square.left = 0;
	fi->ingredients.salmon2square.top = 0;
	fi->ingredients.salmon2square.width = 1920;
	fi->ingredients.salmon2square.height = 1080;
	fi->ingredients.salmon2square2.x = 800;
	fi->ingredients.salmon2square2.y = 855;
	squaresetup_ingredients3(fi);
	set_texturerect_squaresetup2(fi);
}

void set_texturerect_squaresetup(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.ricesprite,
	fi->ingredients.ricesquare2);
	sfSprite_setPosition(fi->ingredients.salmonsprite,
	fi->ingredients.salmonsquare2);
	sfSprite_setTextureRect(fi->ingredients.ricesprite,
	fi->ingredients.ricesquare);
	sfSprite_setTextureRect(fi->ingredients.salmonsprite,
	fi->ingredients.salmonsquare);
}

void squaresetup_ingredients(files_t *fi)
{
	fi->ingredients.ricesquare.left = 0;
	fi->ingredients.ricesquare.top = 0;
	fi->ingredients.ricesquare.width = 1920;
	fi->ingredients.ricesquare.height = 1080;
	fi->ingredients.ricesquare2.x = 685;
	fi->ingredients.ricesquare2.y = 860;
	fi->ingredients.salmonsquare.left = 0;
	fi->ingredients.salmonsquare.top = 0;
	fi->ingredients.salmonsquare.width = 1920;
	fi->ingredients.salmonsquare.height = 1080;
	fi->ingredients.salmonsquare2.x = 663;
	fi->ingredients.salmonsquare2.y = 775;
	squaresetup_ingredients2(fi);
	set_texturerect_squaresetup(fi);
	spriteset_ingredients(fi);
}

/*
** EPITECH PROJECT, 2018
** ingredient_square_setup_ramen.c
** File description:
** squaresetup ingredients
*/

#include "my.h"
#include "my_cook.h"

void squaresetup_ingredients_ramen3(files_t *fi)
{
	fi->ingredients.plantsquare.left = 0;
	fi->ingredients.plantsquare.top = 0;
	fi->ingredients.plantsquare.width = 1920;
	fi->ingredients.plantsquare.height = 1080;
	fi->ingredients.plantsquare2.x = 800;
	fi->ingredients.plantsquare2.y = 760;
	fi->ingredients.shrimpsquare.left = 0;
	fi->ingredients.shrimpsquare.top = 0;
	fi->ingredients.shrimpsquare.width = 1920;
	fi->ingredients.shrimpsquare.height = 1080;
	fi->ingredients.shrimpsquare2.x = 690;
	fi->ingredients.shrimpsquare2.y = 780;
	sfSprite_setPosition(fi->ingredients.plantsprite,
	fi->ingredients.plantsquare2);
	sfSprite_setPosition(fi->ingredients.shrimpsprite,
	fi->ingredients.shrimpsquare2);
	sfSprite_setTextureRect(fi->ingredients.plantsprite,
	fi->ingredients.plantsquare);
	sfSprite_setTextureRect(fi->ingredients.shrimpsprite,
	fi->ingredients.shrimpsquare);
}

void set_texturerect_squaresetup_ramen2(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.bolsprite,
	fi->ingredients.bolsquare2);
	sfSprite_setTextureRect(fi->ingredients.bolsprite,
	fi->ingredients.bolsquare);
	sfSprite_setPosition(fi->ingredients.ramen1sprite,
	fi->ingredients.ramen1square2);
	sfSprite_setTextureRect(fi->ingredients.ramen1sprite,
	fi->ingredients.ramen1square);
}

void squaresetup_ingredients_ramen2(files_t *fi)
{
	fi->ingredients.bolsquare.left = 0;
	fi->ingredients.bolsquare.top = 0;
	fi->ingredients.bolsquare.width = 1920;
	fi->ingredients.bolsquare.height = 1080;
	fi->ingredients.bolsquare2.x = 520;
	fi->ingredients.bolsquare2.y = 540;
	fi->ingredients.ramen1square.left = 0;
	fi->ingredients.ramen1square.top = 0;
	fi->ingredients.ramen1square.width = 1920;
	fi->ingredients.ramen1square.height = 1080;
	fi->ingredients.ramen1square2.x = 520;
	fi->ingredients.ramen1square2.y = 610;
	squaresetup_ingredients_ramen3(fi);
	set_texturerect_squaresetup_ramen2(fi);
}

void set_texturerect_squaresetup_ramen(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.pastasprite,
	fi->ingredients.pastasquare2);
	sfSprite_setPosition(fi->ingredients.eggssprite,
	fi->ingredients.eggssquare2);
	sfSprite_setTextureRect(fi->ingredients.pastasprite,
	fi->ingredients.pastasquare);
	sfSprite_setTextureRect(fi->ingredients.eggssprite,
	fi->ingredients.eggssquare);
}

void squaresetup_ingredients_ramen(files_t *fi)
{
	fi->ingredients.pastasquare.left = 0;
	fi->ingredients.pastasquare.top = 0;
	fi->ingredients.pastasquare.width = 1920;
	fi->ingredients.pastasquare.height = 1080;
	fi->ingredients.pastasquare2.x = 515;
	fi->ingredients.pastasquare2.y = 500;
	fi->ingredients.eggssquare.left = 0;
	fi->ingredients.eggssquare.top = 0;
	fi->ingredients.eggssquare.width = 1920;
	fi->ingredients.eggssquare.height = 1080;
	fi->ingredients.eggssquare2.x = 780;
	fi->ingredients.eggssquare2.y = 670;
	squaresetup_ingredients_ramen2(fi);
	set_texturerect_squaresetup_ramen(fi);
}

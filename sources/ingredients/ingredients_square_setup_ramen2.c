/*
** EPITECH PROJECT, 2018
** ingredient_square_setup_ramen2.c
** File description:
** squaresetup ingredients
*/

#include "my.h"
#include "my_cook.h"

void squaresetup_ingredients_2ramen3(files_t *fi)
{
	fi->ingredients.grainesquare.left = 0;
	fi->ingredients.grainesquare.top = 0;
	fi->ingredients.grainesquare.width = 1920;
	fi->ingredients.grainesquare.height = 1080;
	fi->ingredients.grainesquare2.x = 710;
	fi->ingredients.grainesquare2.y = 700;
	fi->ingredients.beafsquare.left = 0;
	fi->ingredients.beafsquare.top = 0;
	fi->ingredients.beafsquare.width = 1920;
	fi->ingredients.beafsquare.height = 1080;
	fi->ingredients.beafsquare2.x = 520;
	fi->ingredients.beafsquare2.y = 640;
	sfSprite_setPosition(fi->ingredients.grainesprite,
	fi->ingredients.grainesquare2);
	sfSprite_setPosition(fi->ingredients.beafsprite,
	fi->ingredients.beafsquare2);
	sfSprite_setTextureRect(fi->ingredients.grainesprite,
	fi->ingredients.grainesquare);
	sfSprite_setTextureRect(fi->ingredients.beafsprite,
	fi->ingredients.beafsquare);
}

void set_texturerect_squaresetup_2ramen2(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.sushi1sprite,
	fi->ingredients.sushi1square2);
	sfSprite_setTextureRect(fi->ingredients.sushi1sprite,
	fi->ingredients.sushi1square);
}

void squaresetup_ingredients_2ramen2(files_t *fi)
{
	fi->ingredients.sushi1square.left = 0;
	fi->ingredients.sushi1square.top = 0;
	fi->ingredients.sushi1square.width = 1920;
	fi->ingredients.sushi1square.height = 1080;
	fi->ingredients.sushi1square2.x = 680;
	fi->ingredients.sushi1square2.y = 800;
	set_texturerect_squaresetup_2ramen2(fi);
	squaresetup_ingredients_2ramen3(fi);
}

void set_texturerect_squaresetup_2ramen(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.sojaplantsprite,
	fi->ingredients.sojaplantsquare2);
	sfSprite_setPosition(fi->ingredients.carrotsprite,
	fi->ingredients.carrotsquare2);
	sfSprite_setTextureRect(fi->ingredients.sojaplantsprite,
	fi->ingredients.sojaplantsquare);
	sfSprite_setTextureRect(fi->ingredients.carrotsprite,
	fi->ingredients.carrotsquare);
}

void squaresetup_ingredients_2ramen(files_t *fi)
{
	fi->ingredients.sojaplantsquare.left = 0;
	fi->ingredients.sojaplantsquare.top = 0;
	fi->ingredients.sojaplantsquare.width = 1920;
	fi->ingredients.sojaplantsquare.height = 1080;
	fi->ingredients.sojaplantsquare2.x = 700;
	fi->ingredients.sojaplantsquare2.y = 600;
	fi->ingredients.carrotsquare.left = 0;
	fi->ingredients.carrotsquare.top = 0;
	fi->ingredients.carrotsquare.width = 1920;
	fi->ingredients.carrotsquare.height = 1080;
	fi->ingredients.carrotsquare2.x = 675;
	fi->ingredients.carrotsquare2.y = 760;
	squaresetup_ingredients_2ramen2(fi);
	set_texturerect_squaresetup_2ramen(fi);
}

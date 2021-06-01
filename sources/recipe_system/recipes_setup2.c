/*
** EPITECH PROJECT, 2017
** recipes_setup.c
** File description:
** recipes_setup.c
*/

#include "my.h"
#include "my_cook.h"

void spriteset2_recipes(files_t *fi)
{
	fi->ingredients.bolrice_rice = 0;
	fi->ingredients.bolrice_bol = 0;
	fi->ingredients.bolrice = 0;
	sfSprite_setTexture(fi->recipes.r1sprite,
	fi->recipes.r1texture, sfTrue);
	sfSprite_setTexture(fi->recipes.su2sprite,
	fi->recipes.su2texture, sfTrue);
	sfSprite_setTexture(fi->recipes.brsprite,
	fi->recipes.brtexture, sfTrue);
}

void squaresetup2_recipes(files_t *fi)
{
	fi->recipes.su2square.left = 0;
	fi->recipes.su2square.top = 0;
	fi->recipes.su2square.width = 1920;
	fi->recipes.su2square.height = 1080;
	fi->recipes.r1square.left = 0;
	fi->recipes.r1square.top = 0;
	fi->recipes.r1square.width = 1920;
	fi->recipes.r1square.height = 1080;
	fi->recipes.brsquare.left = 0;
	fi->recipes.brsquare.top = 0;
	fi->recipes.brsquare.width = 1920;
	fi->recipes.brsquare.height = 1080;
	sfSprite_setTextureRect(fi->recipes.su2sprite, fi->recipes.su2square);
	sfSprite_setTextureRect(fi->recipes.r1sprite, fi->recipes.r1square);
	sfSprite_setTextureRect(fi->recipes.brsprite, fi->recipes.brsquare);
}

void recipes_setup2(files_t *fi)
{
	fi->recipes.su2texture =
	sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ingredients_menu_sushi2.png",
	NULL);
	fi->recipes.su2sprite = sfSprite_create();
	fi->recipes.r1texture =
	sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ingredients_menu_ramen1.png",
	NULL);
	fi->recipes.r1sprite = sfSprite_create();
	fi->recipes.brtexture =
	sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ingredients_menu_bolrice.png",
	NULL);
	fi->recipes.brsprite = sfSprite_create();
	squaresetup2_recipes(fi);
	spriteset2_recipes(fi);
	sfSprite_setTextureRect(fi->recipes.su2sprite, fi->recipes.su2square);
	sfSprite_setTextureRect(fi->recipes.r1sprite, fi->recipes.r1square);
	sfSprite_setTextureRect(fi->recipes.brsprite, fi->recipes.brsquare);
}

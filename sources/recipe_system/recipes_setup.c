/*
** EPITECH PROJECT, 2017
** recipes_setup.c
** File description:
** recipes_setup.c
*/

#include "my.h"
#include "my_cook.h"

void spriteset_recipes(files_t *fi)
{
	sfSprite_setTexture(fi->recipes.k1sprite, fi->recipes.k1texture,
	sfTrue);
	sfSprite_setTexture(fi->recipes.k2sprite, fi->recipes.k2texture,
	sfTrue);
	sfSprite_setTexture(fi->recipes.k3sprite, fi->recipes.k3texture,
	sfTrue);
	sfSprite_setTexture(fi->recipes.su1sprite, fi->recipes.su1texture,
	sfTrue);
	sfSprite_setTexture(fi->recipes.k4sprite, fi->recipes.k4texture,
	sfTrue);
	sfSprite_setTextureRect(fi->recipes.k1sprite, fi->recipes.k1square);
	sfSprite_setTextureRect(fi->recipes.k2sprite, fi->recipes.k2square);
	sfSprite_setTextureRect(fi->recipes.k3sprite, fi->recipes.k3square);
	sfSprite_setTextureRect(fi->recipes.k4sprite, fi->recipes.k4square);
	sfSprite_setTextureRect(fi->recipes.su1sprite, fi->recipes.su1square);
}

void squaresetup_recipes2(files_t *fi)
{
	fi->recipes.k3square.left = 0;
	fi->recipes.k3square.top = 0;
	fi->recipes.k3square.width = 353;
	fi->recipes.k3square.height = 88;
	fi->recipes.k3square2.x = 0;
	fi->recipes.k3square2.y = 0;
	fi->recipes.k4square.left = 0;
	fi->recipes.k4square.top = 0;
	fi->recipes.k4square.width = 353;
	fi->recipes.k4square.height = 88;
	fi->recipes.k4square2.x = 0;
	fi->recipes.k4square2.y = 0;
	fi->recipes.su1square.left = 0;
	fi->recipes.su1square.top = 0;
	fi->recipes.su1square.width = 1920;
	fi->recipes.su1square.height = 1080;
	sfSprite_setTextureRect(fi->recipes.k3sprite, fi->recipes.k3square);
	sfSprite_setTextureRect(fi->recipes.k4sprite, fi->recipes.k4square);
	sfSprite_setPosition(fi->recipes.k3sprite, fi->recipes.k3square2);
	sfSprite_setTextureRect(fi->recipes.su1sprite, fi->recipes.su1square);
}

void squaresetup_recipes(files_t *fi)
{
	fi->recipes.k1square.left = 0;
	fi->recipes.k1square.top = 0;
	fi->recipes.k1square.width = 353;
	fi->recipes.k1square.height = 88;
	fi->recipes.k1square2.x = 0;
	fi->recipes.k1square2.y = 0;
	fi->recipes.k2square.left = 0;
	fi->recipes.k2square.top = 0;
	fi->recipes.k2square.width = 353;
	fi->recipes.k2square.height = 88;
	fi->recipes.k2square2.x = 0;
	fi->recipes.k2square2.y = 0;
	squaresetup_recipes2(fi);
	sfSprite_setTextureRect(fi->recipes.k1sprite, fi->recipes.k1square);
	sfSprite_setPosition(fi->recipes.k1sprite, fi->recipes.k1square2);
	sfSprite_setTextureRect(fi->recipes.k2sprite, fi->recipes.k2square);
	sfSprite_setPosition(fi->recipes.k2sprite, fi->recipes.k2square2);
	sfSprite_setPosition(fi->recipes.k4sprite, fi->recipes.k4square2);
}

void recipes_setup(files_t *fi)
{
	fi->recipes.k1texture = sfTexture_createFromFile(
	"ressources/pictures/game/knife/knife_sushi.png", NULL);
	fi->recipes.k1sprite = sfSprite_create();
	fi->recipes.k2texture =
	sfTexture_createFromFile(
	"ressources/pictures/game/knife/knife_sushi2.png", NULL);
	fi->recipes.k2sprite = sfSprite_create();
	fi->recipes.k3texture = sfTexture_createFromFile(
	"ressources/pictures/game/knife/knife_ramen.png", NULL);
	fi->recipes.k3sprite = sfSprite_create();
	fi->recipes.k4texture = sfTexture_createFromFile(
	"ressources/pictures/game/knife/knife_bolrice.png", NULL);
	fi->recipes.k4sprite = sfSprite_create();
	fi->recipes.su1texture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ingredients_menu.png", NULL);
	fi->recipes.su1sprite = sfSprite_create();
	squaresetup_recipes(fi);
	spriteset_recipes(fi);
}

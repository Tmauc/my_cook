/*
** EPITECH PROJECT, 2017
** ingredients_setup_ramen2.c
** File description:
** ingredients_setup_ramen2.c
*/

#include "my.h"
#include "my_cook.h"

void set_texturerect_squaresetup_bolrice(files_t *fi)
{
	sfSprite_setPosition(fi->ingredients.bolricesprite,
	fi->ingredients.bolricesquare2);
	sfSprite_setPosition(fi->ingredients.bolrrsprite,
	fi->ingredients.bolrrsquare2);
	sfSprite_setTextureRect(fi->ingredients.bolricesprite,
	fi->ingredients.bolricesquare);
	sfSprite_setTextureRect(fi->ingredients.bolrrsprite,
	fi->ingredients.bolrrsquare);
	sfSprite_setPosition(fi->ingredients.bolrbsprite,
	fi->ingredients.bolrbsquare2);
	sfSprite_setTextureRect(fi->ingredients.bolrbsprite,
	fi->ingredients.bolrbsquare);
}

void squaresetup_ingredients_bolrice(files_t *fi)
{
	fi->ingredients.bolricesquare.left = 0;
	fi->ingredients.bolricesquare.top = 0;
	fi->ingredients.bolricesquare.width = 1920;
	fi->ingredients.bolricesquare.height = 1080;
	fi->ingredients.bolricesquare2.x = 520;
	fi->ingredients.bolricesquare2.y = 540;
	fi->ingredients.bolrrsquare.left = 0;
	fi->ingredients.bolrrsquare.top = 0;
	fi->ingredients.bolrrsquare.width = 1920;
	fi->ingredients.bolrrsquare.height = 1080;
	fi->ingredients.bolrrsquare2.x = 520;
	fi->ingredients.bolrrsquare2.y = 540;
	fi->ingredients.bolrbsquare.left = 0;
	fi->ingredients.bolrbsquare.top = 0;
	fi->ingredients.bolrbsquare.width = 1920;
	fi->ingredients.bolrbsquare.height = 1080;
	fi->ingredients.bolrbsquare2.x = 520;
	fi->ingredients.bolrbsquare2.y = 540;
	set_texturerect_squaresetup_bolrice(fi);
}

void ingredients_setup4(files_t *fi)
{
	fi->ingredients.bolricetexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/bolrice.png", NULL);
	fi->ingredients.bolricesprite = sfSprite_create();
	fi->ingredients.bolrrtexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/bolrice_rice.png", NULL);
	fi->ingredients.bolrrsprite = sfSprite_create();
	fi->ingredients.bolrbtexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_bol.png", NULL);
	fi->ingredients.bolrbsprite = sfSprite_create();
	sfSprite_setTexture(fi->ingredients.bolricesprite,
	fi->ingredients.bolricetexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.bolrrsprite,
	fi->ingredients.bolrrtexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.bolrbsprite,
	fi->ingredients.bolrbtexture, sfTrue);
	squaresetup_ingredients_bolrice(fi);
}

void spriteset_ingredients3(files_t *fi)
{
	sfSprite_setTexture(fi->ingredients.beafsprite,
	fi->ingredients.beaftexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.sojaplantsprite,
	fi->ingredients.sojaplanttexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.carrotsprite,
	fi->ingredients.carrottexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.grainesprite,
	fi->ingredients.grainetexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.sushi1sprite,
	fi->ingredients.sushi1texture, sfTrue);
}

void ingredients_setup3(files_t *fi)
{
	fi->ingredients.sojaplanttexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_sojaplant.png", NULL);
	fi->ingredients.sojaplantsprite = sfSprite_create();
	fi->ingredients.beaftexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_beaf.png", NULL);
	fi->ingredients.beafsprite = sfSprite_create();
	fi->ingredients.carrottexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_carrot.png", NULL);
	fi->ingredients.carrotsprite = sfSprite_create();
	fi->ingredients.grainetexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_graine.png", NULL);
	fi->ingredients.grainesprite = sfSprite_create();
	fi->ingredients.sushi1texture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi1.png", NULL);
	fi->ingredients.sushi1sprite = sfSprite_create();
	squaresetup_ingredients_2ramen(fi);
	spriteset_ingredients3(fi);
	ingredients_setup4(fi);
}

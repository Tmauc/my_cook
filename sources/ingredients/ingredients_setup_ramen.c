/*
** EPITECH PROJECT, 2017
** ingredients_setup_ramen.c
** File description:
** ingredients_setup_ramen.c
*/

#include "my.h"
#include "my_cook.h"

void setup_all_ingredients_int2(files_t *fi)
{
	fi->ingredients.ramen1 = 0;
	fi->ingredients.ramen1 = 0;
	fi->ingredients.ramen1_bol = 0;
	fi->ingredients.ramen1_plant = 0;
	fi->ingredients.ramen1_shrimp = 0;
	fi->ingredients.ramen1_eggs = 0;
	fi->ingredients.ramen1_pasta = 0;
	fi->ingredients.ramen1_graine = 0;
	fi->ingredients.ramen1_plant = 0;
	fi->ingredients.ramen1_sojaplant = 0;
	fi->ingredients.ramen1_beaf = 0;
}

void spriteset_ingredients2(files_t *fi)
{
	setup_all_ingredients_int2(fi);
	sfSprite_setTexture(fi->ingredients.eggssprite,
	fi->ingredients.eggstexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.bolsprite,
	fi->ingredients.boltexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.pastasprite,
	fi->ingredients.pastatexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.plantsprite,
	fi->ingredients.planttexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.shrimpsprite,
	fi->ingredients.shrimptexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.ramen1sprite,
	fi->ingredients.ramen1texture, sfTrue);
}

void ingredients_setup2(files_t *fi)
{
	fi->ingredients.boltexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_bol.png", NULL);
	fi->ingredients.bolsprite = sfSprite_create();
	fi->ingredients.eggstexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_eggs.png", NULL);
	fi->ingredients.eggssprite = sfSprite_create();
	fi->ingredients.pastatexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_pasta.png", NULL);
	fi->ingredients.pastasprite = sfSprite_create();
	fi->ingredients.planttexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_plant.png", NULL);
	fi->ingredients.plantsprite = sfSprite_create();
	fi->ingredients.shrimptexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1_shrimp.png", NULL);
	fi->ingredients.shrimpsprite = sfSprite_create();
	fi->ingredients.ramen1texture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/ramen1.png", NULL);
	fi->ingredients.ramen1sprite = sfSprite_create();
	squaresetup_ingredients_ramen(fi);
	spriteset_ingredients2(fi);
}

/*
** EPITECH PROJECT, 2017
** ingredients_setup.c
** File description:
** ingredients_setup.c
*/

#include "my.h"
#include "my_cook.h"

void setup_all_ingredients_int(files_t *fi)
{
	fi->ingredients.sushi1 = 0;
	fi->ingredients.sushi2 = 0;
	fi->ingredients.sushi2_rice = 0;
	fi->ingredients.sushi2_salmon = 0;
	fi->ingredients.sushi1_rice = 0;
	fi->ingredients.sushi1_cucumber = 0;
	fi->ingredients.sushi1_seaweed = 0;
	fi->ingredients.sushi1_salmon = 0;
}

void spriteset_ingredients(files_t *fi)
{
	setup_all_ingredients_int(fi);
	sfSprite_setTexture(fi->ingredients.salmonsprite,
	fi->ingredients.salmontexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.ricesprite,
	fi->ingredients.ricetexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.salmon2sprite,
	fi->ingredients.salmon2texture, sfTrue);
	sfSprite_setTexture(fi->ingredients.rice2sprite,
	fi->ingredients.rice2texture, sfTrue);
	sfSprite_setTexture(fi->ingredients.cucumbersprite,
	fi->ingredients.cucumbertexture, sfTrue);
	sfSprite_setTexture(fi->ingredients.seaweedsprite,
	fi->ingredients.seaweedtexture, sfTrue);
}

void ingredients_setup(files_t *fi)
{
	fi->ingredients.ricetexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi2_rice.png", NULL);
	fi->ingredients.ricesprite = sfSprite_create();
	fi->ingredients.salmontexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi2_salmon.png", NULL);
	fi->ingredients.salmonsprite = sfSprite_create();
	fi->ingredients.rice2texture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi1_rice.png", NULL);
	fi->ingredients.rice2sprite = sfSprite_create();
	fi->ingredients.salmon2texture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi1_salmon.png", NULL);
	fi->ingredients.salmon2sprite = sfSprite_create();
	fi->ingredients.cucumbertexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi1_cucumber.png", NULL);
	fi->ingredients.cucumbersprite = sfSprite_create();
	fi->ingredients.seaweedtexture = sfTexture_createFromFile(
	"ressources/pictures/game/ingredients/sushi1_seaweed.png", NULL);
	fi->ingredients.seaweedsprite = sfSprite_create();
	squaresetup_ingredients(fi);
	ingredients_setup2(fi);
}

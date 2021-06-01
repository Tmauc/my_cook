/*
** EPITECH PROJECT, 2017
** destroy_recipes
** File description:
** desroy_recipes
*/

#include "my.h"
#include "my_cook.h"

void destroy_sprite_ingredients(files_t *fi)
{
	sfSprite_destroy(fi->ingredients.ramen1sprite);
	sfSprite_destroy(fi->ingredients.sushi1sprite);
	sfSprite_destroy(fi->ingredients.ricesprite);
	sfSprite_destroy(fi->ingredients.rice2sprite);
	sfSprite_destroy(fi->ingredients.salmonsprite);
	sfSprite_destroy(fi->ingredients.salmon2sprite);
	sfSprite_destroy(fi->ingredients.pastasprite);
	sfSprite_destroy(fi->ingredients.grainesprite);
	sfSprite_destroy(fi->ingredients.beafsprite);
	sfSprite_destroy(fi->ingredients.carrotsprite);
	sfSprite_destroy(fi->ingredients.shrimpsprite);
	sfSprite_destroy(fi->ingredients.bolsprite);
	sfSprite_destroy(fi->ingredients.sojaplantsprite);
	sfSprite_destroy(fi->ingredients.eggssprite);
	sfSprite_destroy(fi->ingredients.plantsprite);
	sfSprite_destroy(fi->ingredients.seaweedsprite);
	sfSprite_destroy(fi->ingredients.cucumbersprite);
}

void destroy_sprite_recipes(files_t *fi)
{
	sfSprite_destroy(fi->recipes.k1sprite);
	sfSprite_destroy(fi->recipes.k2sprite);
	sfSprite_destroy(fi->recipes.k3sprite);
	sfSprite_destroy(fi->recipes.su1sprite);
	sfSprite_destroy(fi->recipes.su2sprite);
	sfSprite_destroy(fi->recipes.r1sprite);

}

void destroy_texture_ingredients(files_t *fi)
{
	sfTexture_destroy(fi->ingredients.ramen1texture);
	sfTexture_destroy(fi->ingredients.sushi1texture);
	sfTexture_destroy(fi->ingredients.ricetexture);
	sfTexture_destroy(fi->ingredients.rice2texture);
	sfTexture_destroy(fi->ingredients.salmontexture);
	sfTexture_destroy(fi->ingredients.salmon2texture);
	sfTexture_destroy(fi->ingredients.pastatexture);
	sfTexture_destroy(fi->ingredients.grainetexture);
	sfTexture_destroy(fi->ingredients.beaftexture);
	sfTexture_destroy(fi->ingredients.carrottexture);
	sfTexture_destroy(fi->ingredients.shrimptexture);
	sfTexture_destroy(fi->ingredients.boltexture);
	sfTexture_destroy(fi->ingredients.sojaplanttexture);
	sfTexture_destroy(fi->ingredients.eggstexture);
	sfTexture_destroy(fi->ingredients.planttexture);
	sfTexture_destroy(fi->ingredients.seaweedtexture);
	sfTexture_destroy(fi->ingredients.cucumbertexture);
}

void destroy_texture_recipes(files_t *fi)
{
	sfTexture_destroy(fi->recipes.k1texture);
	sfTexture_destroy(fi->recipes.k2texture);
	sfTexture_destroy(fi->recipes.k3texture);
	sfTexture_destroy(fi->recipes.su1texture);
	sfTexture_destroy(fi->recipes.su2texture);
	sfTexture_destroy(fi->recipes.r1texture);
}

void destroy2(files_t *fi)
{
	destroy_texture_recipes(fi);
	destroy_sprite_recipes(fi);
	destroy_texture_ingredients(fi);
	destroy_sprite_ingredients(fi);
}

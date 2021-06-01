/*
** EPITECH PROJECT, 2017
** sounds
** File description:
** sounds
*/

#include "my.h"
#include "my_cook.h"

void soundplay_knife(files_t *fi)
{
	if (sfSound_getStatus(fi->sounds.sound_knife) == 0)
		sfSound_play(fi->sounds.sound_knife);
}

void soundplay_bell(files_t *fi)
{
	if (sfSound_getStatus(fi->sounds.sound_bell) == 0)
		sfSound_play(fi->sounds.sound_bell);
}

void soundplay_gong(files_t *fi)
{
	if (sfSound_getStatus(fi->sounds.sound_knife) == 1)
		sfSound_pause(fi->sounds.sound_knife);
	if (sfSound_getStatus(fi->sounds.sound_gong) == 0)
		sfSound_play(fi->sounds.sound_gong);
}

void soundplay_door(files_t *fi)
{

	if (sfSound_getStatus(fi->sounds.sound_door) == 0) {
		sfSound_play(fi->sounds.sound_door);
	}
}

void soundsetup(files_t *fi)
{
	fi->sounds.buffer_knife =
	sfSoundBuffer_createFromFile("ressources/sounds/knife.ogg");
	fi->sounds.sound_knife = sfSound_create();
	sfSound_setBuffer(fi->sounds.sound_knife, fi->sounds.buffer_knife);
	fi->sounds.buffer_gong =
	sfSoundBuffer_createFromFile("ressources/sounds/gong.ogg");
	fi->sounds.sound_gong = sfSound_create();
	sfSound_setBuffer(fi->sounds.sound_gong, fi->sounds.buffer_gong);
	fi->sounds.buffer_bell =
	sfSoundBuffer_createFromFile("ressources/sounds/bell.ogg");
	fi->sounds.sound_bell = sfSound_create();
	sfSound_setBuffer(fi->sounds.sound_bell, fi->sounds.buffer_bell);
	fi->sounds.buffer_door =
	sfSoundBuffer_createFromFile("ressources/sounds/door2.ogg");
	fi->sounds.sound_door = sfSound_create();
	sfSound_setBuffer(fi->sounds.sound_door, fi->sounds.buffer_door);
	sfSound_setVolume(fi->sounds.sound_knife, fi->sounds.volume_knife);
	sfSound_setVolume(fi->sounds.sound_gong, fi->sounds.volume_gong);
	sfSound_setVolume(fi->sounds.sound_bell, fi->sounds.volume_bell);
	sfSound_setVolume(fi->sounds.sound_door, fi->sounds.volume_door);
}

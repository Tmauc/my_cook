/*
** EPITECH PROJECT, 2017
** volume.c
** File description:
** volume.c
*/

#include "my.h"
#include "my_cook.h"

void check_volume(files_t *fi)
{
	if (fi->sounds.volume_menu < 0)
		fi->sounds.volume_menu = 0;
	if (fi->sounds.volume_game < 0)
		fi->sounds.volume_game = 0;
	if (fi->sounds.volume_knife < 0)
		fi->sounds.volume_knife = 0;
	if (fi->sounds.volume_gong < 0)
		fi->sounds.volume_gong = 0;
	if (fi->sounds.volume_bell < 0)
		fi->sounds.volume_bell = 0;
	if (fi->sounds.volume_door < 0)
		fi->sounds.volume_door = 0;
}

void set_volume_off(files_t *fi)
{
	sfMusic_setVolume(fi->menu.music, 0);
	sfMusic_setVolume(fi->game.music, 0);
	sfSound_setVolume(fi->sounds.sound_knife, 0);
	sfSound_setVolume(fi->sounds.sound_gong, 0);
	sfSound_setVolume(fi->sounds.sound_bell, 0);
	sfSound_setVolume(fi->sounds.sound_door, 0);

}

void set_volume_on(files_t *fi)
{
	sfMusic_setVolume(fi->menu.music, fi->sounds.volume_menu);
	sfMusic_setVolume(fi->game.music, fi->sounds.volume_game);
	sfSound_setVolume(fi->sounds.sound_knife, fi->sounds.volume_knife);
	sfSound_setVolume(fi->sounds.sound_gong, fi->sounds.volume_gong);
	sfSound_setVolume(fi->sounds.sound_bell, fi->sounds.volume_bell);
	sfSound_setVolume(fi->sounds.sound_door, fi->sounds.volume_door);
}

void change_volume(files_t *fi)
{
	if (fi->sounds.master_volume > 100)
		fi->sounds.master_volume = 100;
	if (fi->sounds.master_volume < 0)
		fi->sounds.master_volume = 0;
	if (fi->sounds.last_master_volume < fi->sounds.master_volume) {
		add_volume(fi);
	} else if (fi->sounds.last_master_volume > fi->sounds.master_volume) {
		remove_volume(fi);
	}
	check_volume(fi);
	set_volume_on(fi);
	fi->sounds.last_master_volume = fi->sounds.master_volume;
}

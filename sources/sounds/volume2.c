/*
** EPITECH PROJECT, 2017
** volume2.c
** File description:
** volume2.c
*/

#include "my.h"
#include "my_cook.h"

void volumesetup(files_t *fi)
{
	fi->sounds.master_volume = 100;
	fi->sounds.last_master_volume = 100;
	fi->sounds.volume_menu = 50;
	fi->sounds.volume_game = 15;
	fi->sounds.volume_knife = 8;
	fi->sounds.volume_gong = 10;
	fi->sounds.volume_bell = 100;
	fi->sounds.volume_door = 80;
	fi->sounds.volume_menu_porcentage = fi->sounds.volume_menu * 0.01;
	fi->sounds.volume_game_porcentage = fi->sounds.volume_game * 0.01;
	fi->sounds.volume_knife_porcentage = fi->sounds.volume_knife * 0.01;
	fi->sounds.volume_gong_porcentage = fi->sounds.volume_gong * 0.01;
	fi->sounds.volume_bell_porcentage = fi->sounds.volume_bell * 0.01;
	fi->sounds.volume_door_porcentage = fi->sounds.volume_door * 0.01;
}

void add_volume(files_t *fi)
{
	fi->sounds.volume_menu += 10 * fi->sounds.volume_menu_porcentage;
	fi->sounds.volume_game += 10 * fi->sounds.volume_game_porcentage;
	fi->sounds.volume_knife += 10 * fi->sounds.volume_knife_porcentage;
	fi->sounds.volume_gong += 10 * fi->sounds.volume_gong_porcentage;
	fi->sounds.volume_bell += 10 * fi->sounds.volume_bell_porcentage;
	fi->sounds.volume_door += 10 * fi->sounds.volume_door_porcentage;
}

void remove_volume(files_t *fi)
{
	fi->sounds.volume_menu -= 10 * fi->sounds.volume_menu_porcentage;
	fi->sounds.volume_game -= 10 * fi->sounds.volume_game_porcentage;
	fi->sounds.volume_knife -= 10 * fi->sounds.volume_knife_porcentage;
	fi->sounds.volume_gong -= 10 * fi->sounds.volume_gong_porcentage;
	fi->sounds.volume_bell -= 10 * fi->sounds.volume_bell_porcentage;
	fi->sounds.volume_door -= 10 * fi->sounds.volume_door_porcentage;
}

#include "main.h"

void level_up(player_t *player)
{
	if (player->level >= 3) {
		printf("%s has reached max level\n", player->name);
		return;
	}
	printf("%s has leveled up\n", player->name);
	player->level += 1;
	switch (player->level) {
		case 2:
			player->attack = attack_2;
			break;
		case 3:
			player->attack = attack_3;
			break;
	}
}

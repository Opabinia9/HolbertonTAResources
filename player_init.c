#include "main.h"
#include <stdio.h>

void player_init(player_t *p, char *name, int class)
{
	player_profile_t profiles[] = {
		{WARRIOR, 200, 100, repr_warrior},
		{WIZARD, 50, 150, repr_wizard},
		{ROGUE, 100, 100, repr_rogue},
		{-1, 0, 0, NULL}
	};
	int i;

	p->name = name;
	p->class = class;
	p->level = 1;
	p->attack = attack_1;

	i = 0;
	while (profiles[i].class != -1){
		if (profiles[i].class == class){
			p->hp = profiles[i].hp;
			p->damage = profiles[i].damage;
			p->repr = profiles[i].repr;
			break;
		}
		i++;
	}

	printf("PLAYER %s CREATED\n", p->name);
	printf("=======================================\n");
	p->repr(p);
	printf("=======================================\n");
}

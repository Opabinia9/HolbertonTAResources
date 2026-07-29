#include "main.h"
#include <stdio.h>

void player_init(player_t *p, char *name, unsigned int level, unsigned int hp, unsigned int damage, unsigned int class)
{
	p->name = name;
	p->class = class;
	p->level = level;
	p->hp = hp;
	p->damage = damage;
	switch (p->class) {
	case WARRIOR:
		p->repr = repr_warrior;
		break;
	case ROGUE:
		p->repr = repr_rogue;
		break;
	case WIZARD:
		p->repr = repr_wizard;
		break;
	default:
		exit(-1);
	}
	p->attack = attack_1;
	printf("PLAYER %s CREATED\n", p->name);
	printf("=======================================\n");
	p->repr(p);
	printf("=======================================\n");
}

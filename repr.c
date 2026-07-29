#include "main.h"

char *print_class(unsigned int class)
{
	switch (class) {
	case WARRIOR:
		return ("WARRIOR");
		break;
	case ROGUE:
		return ("ROGUE");
		break;
	case WIZARD:
		return ("WIZARD");
		break;
	default:
		return ("FUCKOFF");
	}
}

void repr_warrior(player_t *p)
{
	printf("󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥\n");
	printf("player name: %s\n", p->name);
	printf("player class: %s\n", print_class(p->class));
	printf("player level: %d\n", p->level);
	printf("player hp: %d\n", p->hp);
	printf("󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥󰓥\n");
}

void repr_rogue(player_t *p)
{
	printf("󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼\n");
	printf("player name: %s\n", p->name);
	printf("player class: %s\n", print_class(p->class));
	printf("player level: %d\n", p->level);
	printf("player hp: %d\n", p->hp);
	printf("󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼󰧼\n");
}

void repr_wizard(player_t *p)
{
	printf("\n");
	printf("player name: %s\n", p->name);
	printf("player class: %s\n", print_class(p->class));
	printf("player level: %d\n", p->level);
	printf("player hp: %d\n", p->hp);
	printf("\n");
}

#include "main.h"

int main(void)
{
	player_t p1;
	player_t p2;
	player_t p3;

	player_init(&p1, "Joe", WARRIOR);
	player_init(&p2, "Adam", ROGUE);
	player_init(&p3, "Jon", WIZARD);

	p1.attack(&p1, &p2);
	level_up(&p1);
	p1.attack(&p1, &p2);
	level_up(&p1);
	p1.attack(&p1, &p2);
	level_up(&p1);
	p1.attack(&p1, &p2);
}

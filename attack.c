#include "main.h"

void attack_1(player_t *p1, player_t *p2) {
	p2->hp -= (p1->damage * p1->level);
	printf("👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽\n");
	printf("%s attacking %s at level %d\n", p1->name, p2->name, p1->level);
	printf("%s hp: %d\n", p2->name, p2->hp);
	printf("👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽👊🏽\n");
}

void attack_2(player_t *p1, player_t *p2) {
	printf("⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️\n");
	p2->hp -= (p1->damage * p1->level);
	printf("%s attacking %s at level %d\n", p1->name, p2->name, p1->level);
	printf("%s hp: %d\n", p2->name, p2->hp);
	printf("⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️⚔️\n");
}

void attack_3(player_t *p1, player_t *p2) {
	printf("💥💥💥💥💥💥💥💥💥💥\n");
	p2->hp -= (p1->damage * p1->level);
	printf("%s attacking %s at level %d\n", p1->name, p2->name, p1->level);
	printf("%s hp: %d\n", p2->name, p2->hp);
	printf("💥💥💥💥💥💥💥💥💥💥\n");
}

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WARRIOR 0
#define ROGUE 1
#define WIZARD 2

typedef struct class_s {
	char *name;
	float multiplier;
} class_t;

typedef struct player_s {
	char *name;
	unsigned int level;
	unsigned int hp;
	unsigned int damage;
	unsigned int class;
	void (*repr)(struct player_s *p);
	void (*attack)(struct player_s *p1, struct player_s *p2);
} player_t;

void level_up(player_t *player);
void player_init(player_t *p, char *name, unsigned int level, unsigned int hp, unsigned int damage, unsigned int class);
void repr_warrior(player_t *p);
void repr_rogue(player_t *p);
void repr_wizard(player_t *p);
void attack_1(player_t *p1, player_t *p2);
void attack_2(player_t *p1, player_t *p2);
void attack_3(player_t *p1, player_t *p2);


#endif

#ifndef MAIN_H
#define MAIN_H

typedef struct player_s {
	char* name;
	unsigned int level;
	unsigned int hp;
	void (*repr)(struct player_s* p);
	unsigned int (*attack)(struct player_s* p1, struct player_s* p2);
} player_t;

#endif

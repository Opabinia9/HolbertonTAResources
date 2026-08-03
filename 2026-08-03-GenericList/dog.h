#ifndef DOG_H
#define DOG_H

#include "genericlist.h"
typedef struct dog_s{
	char *name;
	unsigned int age;
} dog_t;

void print_dog(void *data);
dog_t *create_dog(char *name, unsigned int age);
#endif


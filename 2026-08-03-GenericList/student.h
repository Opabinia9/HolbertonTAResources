#ifndef STUDENT_H
#define STUDENT_H

#include "genericlist.h"
typedef struct student_s{
	char *name;
	unsigned int score;
	unsigned int brain;
} student_t;

void print_student(void *data);
student_t *create_student(char *name, unsigned int score, unsigned int brain);
#endif


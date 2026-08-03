#include "student.h"

void print_student(void *data){
		student_t *student = data;
		printf("name: %s\n", student->name);
		printf("score: %u\n", student->score);
		switch (student->brain){
			case (FALSE):
				printf("404 BRAIN NOT FOUND\n");
				break;
			case (TRUE):
				printf("200 OK\n");
				break;
			case (MAYBE):
				printf("301 REDIRECT\n");
				break;
			default:
				printf("SEGFAULT\n");
		}
}

student_t *create_student(char *name, unsigned int score, unsigned int brain) {
	student_t *new_student;

	new_student = malloc(sizeof(*new_student));
	if (!new_student) {
		return (NULL);
	}

	new_student->name = name;
	new_student->score = score;
	new_student->brain = brain;
	return (new_student);
}

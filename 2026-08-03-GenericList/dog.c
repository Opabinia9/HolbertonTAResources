#include "dog.h"

void print_dog(void *data){
	dog_t *dog = data;
	printf("name: %s\n", dog->name);
	printf("age: %u\n", dog->age);
}

dog_t *create_dog(char *name, unsigned int age){
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));
	if (!new_dog) {
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	return (new_dog);
}

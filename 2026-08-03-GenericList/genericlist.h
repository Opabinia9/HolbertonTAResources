#ifndef GENERIC_LIST_H
#define GENERIC_LIST_H

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAYBE 2

typedef struct generic_item_s {
	void *data;
	struct generic_item_s *next;
} generic_item_t;

typedef struct generic_list_s {
	generic_item_t *head;
	void (*print_item)(void *data);
} generic_list_t;

void add_generic_node(generic_item_t **head, void *data);
void print_generic_list(generic_list_t *list);

#endif

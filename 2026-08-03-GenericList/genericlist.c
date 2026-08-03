#include "genericlist.h"

void add_generic_node(generic_item_t **head, void *data){
	generic_item_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node) {
		return;
	}

	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}

void print_generic_list(generic_list_t *list){
	generic_item_t *local_head;

	local_head = list->head;

	while(local_head != NULL) {
		list->print_item(local_head->data);
		local_head = local_head->next;
	}
}


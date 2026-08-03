#include "genericlist.h"
#include "dog.h"
#include "student.h"


int main(void){
	generic_list_t dog_list;
	generic_list_t student_list;

	dog_list.print_item = print_dog;
	dog_list.head = NULL;

	add_generic_node(&dog_list.head, create_dog("bull", 16));
	add_generic_node(&dog_list.head, create_dog("rex", 13));
	add_generic_node(&dog_list.head, create_dog("pele", 3));

	print_generic_list(&dog_list);

	student_list.print_item = print_student;
	student_list.head = NULL;

	add_generic_node(&student_list.head, create_student("andrew", 89, MAYBE));
	add_generic_node(&student_list.head, create_student("seb", 99, TRUE));
	add_generic_node(&student_list.head, create_student("brendan", 0, FALSE));

	print_generic_list(&student_list);

	return (0);
}

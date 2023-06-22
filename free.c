#include "monty.h"
/**
* free_stack - frees a ddl
* @head: head
*/
void free_stack(stack_t *head)
{
	stack_t *z;

	z = head;
	while (head)
	{
		z = head->next;
		free(head);
		head = z;
	}
}

#include "monty.h"
/**
 * addnode - node add
 * @head: head
 * @n: value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *z;

	z = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (z)
		z->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

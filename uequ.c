#include "monty.h"
/**
 * addqueue - node add
 * @n: val
 * @head: head
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *z;

	z = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (z)
	{
		while (z->next)
			z = z->next;
	}
	if (!z)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		z->next = new_node;
		new_node->prev = z;
	}
}

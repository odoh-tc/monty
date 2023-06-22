#include "monty.h"
/**
 * tenk - top prints
 * @head: head
 * @x: num
 * Return: no return
*/
void tenk(stack_t **head, unsigned int x)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", x);
		fclose(y.file);
		free(y.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

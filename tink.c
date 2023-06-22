#include "monty.h"
/**
 * tink - element add
 * @head: head
 * @x: number
 * Return: no return
*/
void tink(stack_t **head, unsigned int x)
{
	stack_t *h;
	int len = 0, z;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", x);
		fclose(y.file);
		free(y.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	z = h->n;
	h->n = h->next->n;
	h->next->n = z;
}

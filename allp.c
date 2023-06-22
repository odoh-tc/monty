#include "monty.h"
/**
 * allp - stack print
 * @head: head
 * @x: no used
 * Return: no return
*/
void allp(stack_t **head, unsigned int x)
{
	stack_t *h;
	(void)x;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

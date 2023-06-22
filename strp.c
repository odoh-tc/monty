#include "monty.h"
/**
 * strp - string print
 * @head: head
 * @x: number
 * Return: no return
*/
void strp(stack_t **head, unsigned int x)
{
	stack_t *h;
	(void)x;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

#include "monty.h"
/**
 * tank - top print
 * @head: head
 * @x: argument
 * Return: return nothing
*/
void tank(stack_t **head, unsigned int x)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", x);
		fclose(y.file);
		free(y.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

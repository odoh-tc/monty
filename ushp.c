#include "monty.h"
/**
 * ushp - node add
 * @head: head
 * @x: line
 * Return: no return
*/
void ushp(stack_t **head, unsigned int x)
{
	int p, i = 0, flag = 0;

	if (y.arg)
	{
		if (y.arg[0] == '-')
			i++;
		for (; y.arg[i] != '\0'; i++)
		{
			if (y.arg[i] > 57 || y.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", x);
			fclose(y.file);
			free(y.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", x);
		fclose(y.file);
		free(y.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	p = atoi(y.arg);
	if (y.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

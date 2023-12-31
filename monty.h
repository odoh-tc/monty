#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void tank(stack_t **head, unsigned int x);
void tenk(stack_t **head, unsigned int x);
void tink(stack_t **head, unsigned int x);
void tacks(stack_t **head, unsigned int x);
void allp(stack_t **head, unsigned int x);
void opn(stack_t **head, unsigned int x);
void free_stack(stack_t *head);
void addnode(stack_t **head, int n);
void ushp(stack_t **head, unsigned int x);

/**
 * struct bus_s - the variables
 * @arg: d value
 * @file: ptr
 * @content: content
 * @lifi: stack <-> queue
 * Description: program carries
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t y;




#endif

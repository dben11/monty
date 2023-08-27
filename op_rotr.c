#include "monty.h"

/**
 * rotr - rotates the stack
 * @stack: the stack to work with
 * @line_number: where the error occured
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *start = NULL;
	(void) line_number;

	if (*stack && (*stack)->next)
	{
		start = *stack;
		while (start->next != NULL)
			start = start->next;
		start->prev->next = NULL;
		start->next = *stack;
		*stack = start;
	}
}

#include "monty.h"

/**
 * add - swap the top two element
 * @stack: the stack to work with
 * @line_number: where the error occured
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int len = 0, a = 0, b = 0;

	len = count_stack(*stack);

	if (len < 2)
		handle_error(ERR_ADD_USG, NULL, line_number, NULL);
	a = temp->n;
	b = temp->next->n;
	temp->next->n = a + b;
	*stack = temp->next;
	free(temp);
}

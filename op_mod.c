#include "monty.h"

/**
 * _mod - computes the rest of the division of the second top element
 *  of the stack by the top element of the stack
 * @stack: the stack to work with
 * @line_number: where the error occured
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int len = 0, a = 0, b = 0;

	len = count_stack(*stack);

	if (len < 2)
		handle_error(ERR_MOD_USG, NULL, line_number, NULL);
	a = temp->n;
	b = temp->next->n;

	if (a == 0)
		handle_error(ERR_DIV_ZRO, NULL, line_number, NULL);

	temp->next->n = b % a;
	*stack = temp->next;
	free(temp);
}

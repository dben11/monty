#include "monty.h"

/**
 * swap - swap the top two element
 * @stack: the stack to work with
 * @line_number: where the error occured
 */

void swap(stack_t **stack, unsigned int line_number)
{
	unsigned int len = 0, temp = 0;

	len = count_stack(*stack);

	if (len < 2)
		handle_error(ERR_SWAP_USG, NULL, line_number, NULL);

	if (*stack)
	{
		temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
}

#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: the given stack to print from
 * @line_number: the line with the error occurred
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		handle_error(ERR_PINT_USG, NULL, line_number, NULL);
	printf("%d\n", (*stack)->n);
}

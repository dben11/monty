#include "monty.h"

/**
 * pstr -  prints the string starting at the top of the stack,
 * followed by a new line
 * @stack: the stack to operate on
 * @line_number: the line where an error occurred
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *start = NULL;
	(void) line_number;

	if (*stack == NULL)
		printf("\n");

	start = *stack;

	while (start != NULL || start->n != 0)
	{
		if (start->n > 0 && start->n <= 127)
		{
			printf("%c", start->n);
			start = start->next;
		}
		else
			break;
	}
	printf("\n");
}

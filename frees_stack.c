#include "monty.h"
/**
 * frees_stack -  frees all the element in a stack
 */

void frees_stack(void)
{
	stack_t *temp = NULL;

	if (head)
	{
		temp = head;
		while (temp)
		{
			head = head->next;
			free(temp);
			temp = head;
		}
	}
}

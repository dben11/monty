#include "monty.h"

/**
 * count_stack - print the number of elements in a linked listint_t list
 * @h: the stack to work with
 *
 * Return: the number of element in the stack
 */

unsigned int count_stack(stack_t *h)
{
	unsigned int node_num = 0;
	stack_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		node_num++;
		ptr = ptr->next;
	}
	return (node_num);
}

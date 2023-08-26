#include "monty.h"

/**
 * push - adds a new node at the beginning of the stack
 * @stack: the given head pointer
 * @param: the data to add
 *
 */

void push(stack_t **stack, unsigned int param)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		handle_error(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;

	if (*stack)
	{
		new_node->next = *stack;
		new_node->prev = (*stack)->prev;
		(*stack)->prev = new_node;
		*stack = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}

/**
 * push_queue - adds a new node to the end of the stack
 * @stack: the given head pointer
 * @param: the data to add
 *
 */

void push_queue(stack_t **stack, unsigned int param)
{
	stack_t *new_node = NULL, *current_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		handle_error(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;

	if (*stack)
	{
		current_node = *stack;
		while (current_node->next != NULL)
			current_node = current_node->next;

		new_node->next = NULL;
		new_node->prev = current_node;
		current_node->next = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}

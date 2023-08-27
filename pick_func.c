#include "monty.h"

/**
 * pick_func - pick the operation function
 * @s: the instruction to be executed
 *
 * Return: a pointer to the function to be executed
 * or NULL if the function don't exists
 */

void (*pick_func(char *s))(stack_t **, unsigned int)
{
	int n = 0;

	instruction_t op_funcs[] = {
		{"push", push},
		{"push_queue", push_queue},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", _mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	while (op_funcs[n].opcode)
	{
		if (strcmp(s, op_funcs[n].opcode) == 0)
			return (op_funcs[n].f);
		n++;
	}
	return (NULL);
}

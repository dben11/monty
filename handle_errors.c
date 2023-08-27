#include "monty.h"

/**
 * handle_error - handles error
 * @errno: the error code to manage
 * @op_code: the operation code
 * @err_line: the line on which the error occurred
 * @buff: the stored error buffer
 */

void handle_error(int errno, char *op_code, unsigned int err_line, char *buff)
{
	if (errno >= 100 && errno < 200)
		handle_cerror(errno, op_code, err_line);
	else if (errno >= 200 && errno <= 210)
		handle_uerror(errno, err_line);
	else if (errno >= 211 && errno <= 220)
		handle_more_uerror(errno, err_line);
	else
		return;
	frees_stack();
	if (buff)
		free(buff);
	exit(EXIT_FAILURE);
}

/**
 * handle_cerror - handles common error
 * @errno: the error code to manage
 * @op_code: the operation code
 * @err_line: the line on which the error occurre
 */

void handle_cerror(int errno, char *op_code, unsigned int err_line)
{
	switch (errno)
	{
		case ERR_BAD_INST:
			fprintf(stderr, "L%d: unknown instruction %s\n", err_line, op_code);
			break;
		case ERR_BAD_MALL:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		default:
			break;
	}
}

/**
 * handle_uerror - handles usage error
 * @errno: the error code to manage
 * @err_line: the line on which the error occurre
 */

void handle_uerror(int errno, unsigned int err_line)
{
	switch (errno)
	{
		case ERR_ARG_USG:
			fprintf(stderr, "USAGE monty file\n");
			break;
		case ERR_PUSH_USG:
			fprintf(stderr, "L%d: usage: push integer\n", err_line);
			break;
		case ERR_PINT_USG:
			fprintf(stderr, "L%d: can't pint, stack empty\n", err_line);
			break;
		case ERR_POP_USG:
			fprintf(stderr, "L%d: can't pop an empty stack\n", err_line);
			break;
		case ERR_SWAP_USG:
			fprintf(stderr, "L%d: can't swap, stack too short\n", err_line);
			break;
		case ERR_ADD_USG:
			fprintf(stderr, "L%d: can't add, stack too short\n", err_line);
			break;
		case ERR_SUB_USG:
			fprintf(stderr, "L%d: can't sub, stack too short\n", err_line);
			break;
		case ERR_DIV_USG:
			fprintf(stderr, "L%d: can't div, stack too short\n", err_line);
			break;
		case ERR_DIV_ZRO:
			fprintf(stderr, "L%d: division by zero\n", err_line);
			break;
		case ERR_MUL_USG:
			fprintf(stderr, "L%d: can't mul, stack too short\n", err_line);
			break;
		case ERR_MOD_USG:
			fprintf(stderr, "L%d: can't mod, stack too short\n", err_line);
			break;
		default:
			break;
	}
}

/**
 * handle_more_uerror - handles more usage error
 * @errno: the error code to manage
 * @err_line: the line on which the error occurre
 */

void handle_more_uerror(int errno, unsigned int err_line)
{
	switch (errno)
	{
		case ERR_PCH_USG:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", err_line);
			break;
		case ERR_PCH_EMP:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", err_line);
			break;
		default:
			break;
	}
}

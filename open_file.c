#include "monty.h"

/**
 * open_file - Opens a file to the interpreter
 * @filename: name of the file to be open
 *
 * Return: the file descriptor
 */

FILE *open_file(char *filename)
{
	FILE *fd = NULL;

	check_access_rights(filename);
	fd = fopen(filename, "r");

	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

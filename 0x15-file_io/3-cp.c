#include "main.h"
#include <stdio.h>

/**
 * error_file - checks for file error
 * @file_from :file from
 * @file_to: file to
 * @argv: arguments vector
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverses
 *
 * @s: stores a value
 */

void print_rev(char *s)
{
	int a, b;

	b = strlen(s);

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}


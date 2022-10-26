#include "main.h"
#include <string.h>

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: stores the value
 */

void puts2(char *str)
{
	int len, x;

	len = strlen(str);
	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}


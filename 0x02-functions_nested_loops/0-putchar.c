#include "main.h"

/**
 * main - Prints out _putchar on a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char func[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(func[i]);
	}
	_putchar('\n');
	return (0);
}


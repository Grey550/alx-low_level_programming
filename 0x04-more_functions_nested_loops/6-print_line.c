#include "main.h"

/**
 * print_line - prints a horizontal line
 * @n: value
 * Return: 0
 */

void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}


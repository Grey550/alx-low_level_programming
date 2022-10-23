#include "main.h"

/**
 * print_number - prints integer
 *
 * @n: holds a value
 * Return: 0;
 */

void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		_putchar('_');
		d = -d;
	}
	if ((d / 10) > 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}

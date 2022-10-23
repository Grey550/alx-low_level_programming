#include "main.h"

/**
 * print_square - function used to print out a square
 *
 * @size: the square size
 * Return: 0
 */

void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (k = 2; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

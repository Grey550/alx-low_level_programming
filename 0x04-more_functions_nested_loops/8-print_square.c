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

	for (i = 0; i <= size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

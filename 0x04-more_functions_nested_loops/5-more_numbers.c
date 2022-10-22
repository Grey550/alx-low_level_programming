#include "main.h"

/**
 * more_numbers - prints 10 times more the numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10 ; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}

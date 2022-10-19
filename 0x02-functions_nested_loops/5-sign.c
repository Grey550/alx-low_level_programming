#include "main.h"

/**
 * print_sign - prints out the signs of the numbers depending on the
 * condition they satisfy
 *
 * @n: the parameter that is being tested
 * Return: returns 1 for greater than, 0 for equals to and - for less than
 */

int print_sign(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (45);
	}
	return (0);
}

#include "main.h"

/**
 * factorial - returns the factorial of given numbers
 *
 * @n: factorial number
 * Return: -1 if lower than 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

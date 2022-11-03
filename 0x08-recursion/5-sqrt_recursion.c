#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: natural square root
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int result = n;
	int x;

	if (n !=  x)
	{
		return (-1);
	}
	result *= _sqrt_recursion(n - 1);
	return (result);
}

#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: first int
 * @y: second int
 * Return: -1 is y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);

	return (result);

}

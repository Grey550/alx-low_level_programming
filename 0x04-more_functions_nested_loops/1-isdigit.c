#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: stores the value
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_isdigit(c);
		return (1);
	}
	else
	{
		return (0);
	}
}

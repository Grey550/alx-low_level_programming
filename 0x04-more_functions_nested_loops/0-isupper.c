#include "main.h"

/**
 * _isupper - displays the uppercase letters
 *
 * @c: is the variable
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

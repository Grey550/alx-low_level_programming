#include "main.h"

/**
 * _islower - checks for lowecase character
 *
 * @c: is integer type
 * Return: 1 if c is lowecase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

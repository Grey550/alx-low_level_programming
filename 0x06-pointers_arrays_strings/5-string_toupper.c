#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @str: string
 * Return: 0
 *
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}

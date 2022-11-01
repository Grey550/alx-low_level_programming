#include "main.h"
#include <string.h>

/**
 * string_toupper - converts a string to uppercase
 * @str: string
 * Return: 0
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i  = 0; i <= strlen(str); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

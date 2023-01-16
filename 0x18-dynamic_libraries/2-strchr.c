#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: If c is found - a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}

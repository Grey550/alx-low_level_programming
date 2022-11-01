#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String where substring will look
 * @accept: Substring of accepted chars
 * Return: Length of occurrence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				c++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (c);
			}
		}
		s++;
	}
	return (c);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplictaes a string
 * @str: string
 * Return: Null if string is Null
 */

char *_strdup(char *str)
{
	char *s;
	int x = 0;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[x] != '\0')
	{
		x++;
	}
	s = malloc(sizeof(char) * x + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= x; a++)
	{
		s[a] = str[a];
	}
	return (s);
}



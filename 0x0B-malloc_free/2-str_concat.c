#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: Null on failure and if empty string is passed
 */

char *str_concat(char *s1, char *s2)
{
	char *programme;
	int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	programme = malloc(sizeof(char) * (x + y + 1));

	if (programme == NULL)
		return (NULL);
	x = y = 0;

	while (s1[x] != '\0')
	{
		programme[x] = s1[x];
		x++;
	}
	while (s2[x] != '\0')
	{
		programme[x] = s2[x];
		x++, y++;
	}
	programme[x] = '\0';
	return (programme);
}

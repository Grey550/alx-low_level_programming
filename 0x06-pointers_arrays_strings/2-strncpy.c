#include "main.h"
#include <string.h>

/**
 * _strncpy - copies one string to the other
 *
 * @dest: first string
 * @src: second string
 * @n: integer value
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(src, dest, n);
	return (dest);
}


#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings using n bytes
 *
 * @dest: first string
 * @src: second string
 * @n: third string
 * Return: a pointer resulting to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}

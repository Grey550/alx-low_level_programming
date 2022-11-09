#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of expected array
 * @c: array
 * Return: Null if size is 0 and Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}


#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of the array
 *
 * @a: array
 * @n: number of elements of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

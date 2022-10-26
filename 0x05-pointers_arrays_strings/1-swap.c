#include "main.h"

/**
 * swap_int - swaps the value of the integer
 *
 * @a: first integer
 * @b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap  = *a;
	*a = *b;
	*b = swap;
}


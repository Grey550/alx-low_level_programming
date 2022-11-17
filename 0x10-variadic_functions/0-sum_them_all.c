#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of the parameters
 * @n: number of integers passed
 * Return: 0 when n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	va_list results;

	if (n == 0)
	{
		return (0);
	}
	va_start(results, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(results, int);
	}
	return (sum);
	va_end(results);
}

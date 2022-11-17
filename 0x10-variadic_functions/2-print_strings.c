#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prinst numbers
 * @separator: string between numbers
 * @n: number of integers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;

	va_list nums;

	if (separator == NULL)
	{
		separator = "";
	}
	if (separator == NULL)
	{
		printf("nil");
	}
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(nums, int);
		printf("%d", result);

		if (n == i + 1)
		{
			;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}



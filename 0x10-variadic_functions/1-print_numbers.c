#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prinst numbers
 * @separator: string between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int result;

	va_list nums;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		result = va_arg(nums, int);
		printf("%d", result);

		if (n == x + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}



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
	int i;
	int result;

	va_list nums;

	if (separator == NULL)
	{
		separator = "";
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



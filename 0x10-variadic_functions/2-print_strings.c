#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string between numbers
 * @n: number of integers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *string;

	va_list nums;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(nums, char *);

		if (string == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", string);
		if (n == x + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}



#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"



/**
 * op_c - prints a char.
 * @form: name va_list
 */

void op_c(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * op_i - prints an integer
 * @form: name va_list
 */

void op_i(va_list form)
{
		printf("%i", va_arg(form, int));
}
/**
 * op_f - prints a float.
 * @form: name
 */

void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * op_s - prints a string.
 * @form: name
 */

void op_s(va_list form)
{
	char *str;

	str = va_arg(form, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */


void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	f ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
	};

	va_start(args, format);
	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ops[j].f(args);
				break;
			}
			j++;
		}
	i++;
	}
	printf("\n");

	va_end(args);
}

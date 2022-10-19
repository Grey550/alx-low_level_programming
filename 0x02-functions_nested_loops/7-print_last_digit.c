#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is the value of the parameter
 * Return: is always 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}

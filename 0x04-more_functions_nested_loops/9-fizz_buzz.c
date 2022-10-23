#include <stdio.h>
#include "main.h"

/**
 * main - prints FizzBuzz for numbers which are multiples of both
 * 3 and 5 and Fizz for multiples of 5 and Buzz for multiples of 3
 *
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz");
		}
		else if (y % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", y);
		}
		if (y == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");

	return (0);
}

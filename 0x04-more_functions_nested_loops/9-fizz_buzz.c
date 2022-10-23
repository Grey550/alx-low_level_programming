#include <stdio.h>

/**
 * main - prints FizzBuzz for numbers which are multiples of both
 * 3 and 5 and Fizz for multiples of 5 and Buzz for multiples of 3
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");
	return (0);
}

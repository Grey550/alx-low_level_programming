#include <stdio.h>

/**
 * main - Prints numbers of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}


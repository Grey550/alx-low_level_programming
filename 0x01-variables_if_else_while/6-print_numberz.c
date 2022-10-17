#include <stdio.h>

/**
 * main - Prints numbers using ASCII
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

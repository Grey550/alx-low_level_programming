#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse order
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}


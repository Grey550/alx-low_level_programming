#include <stdio.h>

/**
 * main - Printing numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Prints out lowercase alphebets
 * in  ascending order
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a < 'z'; a++)
	{
		putchar(a);
	}
	return (0);
}

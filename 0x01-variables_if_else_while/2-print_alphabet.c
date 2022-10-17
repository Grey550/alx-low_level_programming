#include <stdio.h>

/**
 * main - Prints out lowercase alphebets
 * in  ascending order
 * Return: always 0
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}

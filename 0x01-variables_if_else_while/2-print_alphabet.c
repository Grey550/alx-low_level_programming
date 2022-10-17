#include <stdio.h>

/**
 * main - Prints out lowercase alphebets
 * in  ascending order
 * Return: always 0
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz\n";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alpha[a]);
	}
	return (0);
}

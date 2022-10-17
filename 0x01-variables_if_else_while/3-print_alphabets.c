#include <stdio.h>

/**
 * main - Displays both upper and lower case alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;
	int A;

	for (a = 0; a < 26; a++)
	{
		putchar(lower[a]);
	}
	for (A = 0; A < 26; A++)
	{
		putchar(upper[A]);
	}
	putchar('\n');
	return (0);
}

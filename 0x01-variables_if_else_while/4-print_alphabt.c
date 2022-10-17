#include <stdio.h>

/**
 * main - Printing out the alphabet letters except for q and e 
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 0; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}


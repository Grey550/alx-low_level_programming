#include <stdio.h>

/**
 * main - Prints diffrent combination of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (b == 57 && a == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

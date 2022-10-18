#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}

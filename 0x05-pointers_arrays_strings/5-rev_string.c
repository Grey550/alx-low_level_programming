#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: value of the string
 *
 */

void rev_string(char *s)
{
	char reverse;
	int b, lens1, lens2;

	lens1 = 0;
	lens2 = 0;

	while (s[lens1] != '\0')
		lens1++;
	lens2 = lens1 - 1;
	for (b = 0; b < lens1 / 2; b++)
	{
		reverse = s[b];
		s[b] = s[lens2];
		s[lens2] = reverse;
		lens2 -= 1;
	}
}


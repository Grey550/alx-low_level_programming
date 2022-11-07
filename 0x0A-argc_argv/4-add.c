#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, results = 0;

	for (x = 1; x < argc; argc++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Errot\n");
				return (1);
			}
		}
		results += atoi(argv[x]);
	}
	printf("%d\n", results);
	printf("\n");
	return (0);
}

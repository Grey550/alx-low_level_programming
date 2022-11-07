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
	int results = 0,  x, y, z;

	if (argc == 1)
	{
		printf("0\n");
	}
		for (x = 1; x < argc; argc++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] > '9' || argv[x][y] < '0')
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
		}
		for (z  = 1; z < argc; z++)
		{
			z = atoi(argv[x]);
			results += z;
		}
		printf("%d\n", results);
		return (0);
}

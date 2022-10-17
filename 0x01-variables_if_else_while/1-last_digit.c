#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Determines whether the last digit is greater than 5,
  * equals to 0 or less than 6
  *
  * Return: Always 0
  */

int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	printf("Last digit of %d is %d", n, z);
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	else if (z == 0)
	{
		printf("and is 0");
	}
	else if (z < 6 && z != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}

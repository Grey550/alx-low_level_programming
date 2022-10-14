#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *we have called the stdlib for using libraries
  *we have called the time header is used to provide access to time
  *and date manipulation and formatting
  */

/**
  * main - Entry point
  *
  * Description: the program generates random numbers
  *
  * Return: Always 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive %d\n", rand());
	}
	else if (n == 0)
	{
		printf("is zero %d\n", rand());
	}
	else if (n < 0)
	{
		printf("is negative %d\n", rand());
	}
	return (0);
}




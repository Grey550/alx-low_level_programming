#include <stdio.h>

/**
  *main - the entry point where the program begins
  *data types - various containers that stores different kinds of data
  *Return: returns 0 to show success
  */

int main(void)
{	
	int a;
	char b;
	long int c;
	long long int d;
	float e;
	
	printf("Size of a char: %c", sizeof(b));
	printf("Size of an int: %d", sizeof(a));
	printf("Size of a long int: %ld", sizeof(c));
	printf("Size of a long long int: %lld", sizeof(d));
	printf("Size of a float: %f", sizeof(e));
	return (0);

}

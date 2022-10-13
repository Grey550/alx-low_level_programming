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
	
	printf("Size of a char: %c 1 byte(s)", sizeof(b));
	printf("Size of an int: %d 4 byte(s)", sizeof(a));
	printf("Size of a long int: %ld 4 byte(s)", sizeof(c));
	printf("Size of a long long int: %lld 8 byte(s)", sizeof(d));
	printf("Size of a float: %f 4 byte(s)", sizeof(e));
	return (0);

}

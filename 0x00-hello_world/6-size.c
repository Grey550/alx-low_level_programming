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
	
	printf("Size of a char: %d 1 byte(s)\n)", sizeof(b));
	printf("Size of an int: %d 4 byte(s)\n", sizeof(a));
	printf("Size of a long int: %d 4 byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d 8 byte(s)\n", sizeof(d));
	printf("Size of a float: %d 4 byte(s)\n", sizeof(e));
	return (0);

}

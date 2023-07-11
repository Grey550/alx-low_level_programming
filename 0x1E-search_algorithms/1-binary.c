#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);

		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);

		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}



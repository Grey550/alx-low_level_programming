#include "search_algos.h"
#include <math.h>

/**
* jump_search - searches for a value in an array of integers
* @array: is a pointer to the first element of the array to search
* @size: is the number of elements in array
* @value: value to search
*
* Return: return the located value
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (!array || !size)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

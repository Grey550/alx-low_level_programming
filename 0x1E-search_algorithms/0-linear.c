#include "search_algos.h"

* linear_search - earches for a value in an array of integers 
* @array:  is a pointer to the first element of the array to search 
* @size: is the number of elements in array
* @value: value to search 
*
* @Return: return the located value
*/

int linear_search(int *array, size_t size, int value)
{
    int x;

    if (array == NULL)
    {
        return (-1);
    }

    for (x = 0; x < (int)size; x++)
    {
        printf("Value checked array[%u] = [%d]\n", x, array[x]);
        if (value == array[x])
        {
            return(x);
        }
    } 
     return (-1);
}

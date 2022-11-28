#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: address of the node
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int x = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		x++;
	}
	return (x);
}


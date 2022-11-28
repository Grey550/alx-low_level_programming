#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: address of the node
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;

	int i = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}


#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (k)
	{
		k++;
		h = h->next;
	}
	return (k);
}

#include <stdlib.h>
#include "lists.h"

/**
 * list_len - The returns of the number of elements in the linked list
 * @h: is pointer to the list_t list
 * Return: numb of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}


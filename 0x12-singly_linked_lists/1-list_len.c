#include "lists.h"

/**
 * list_len - Gets the number of elements in a linked list
 * @h: The head of the linked list
 * Return: The number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h && ++i)
		h = h->next;
	return (i);
}

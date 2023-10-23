#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Gets the number of elements in a linked listint_t list
 * @h: The pointer to the head of the linked listint_t list
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h && ++i)
		h = h->next;
	return (i);
}

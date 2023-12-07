#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 1;
	const dlistint_t *current = h;

	while (current != NULL && count++)
		current = current->next;
	return (count - 1);
}
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The pointer to the head of the listint_t list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h && ++i)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

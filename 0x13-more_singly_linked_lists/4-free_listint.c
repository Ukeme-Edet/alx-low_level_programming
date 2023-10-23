#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		head ? next = head->next : 0;
		free(head);
		head = next;
	}
}

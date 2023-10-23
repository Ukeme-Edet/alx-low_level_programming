#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked
 * list
 * @head: A pointer to a pointer that points to the head of the listint_t list
 * @index: The index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *prev = NULL;

	while (index--)
	{
		if (!curr)
			return (-1);
		prev = curr;
		curr = curr->next;
	}
	if (!curr)
		return (-1);
	if (!prev)
		*head = curr->next;
	else
		prev->next = curr->next;
	free(curr);
	return (1);
}

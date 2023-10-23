#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to a pointer that points to the head of the listint_t list
 * @idx: The index at which the new node is to be inserted
 * @n: The data for the new node
 * Return: The address of the new node, or NULLL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev = NULL, *curr = *head, *new = malloc(sizeof(listint_t));

	new ? new->n = n : 0;
	while (new && curr && idx != 0)
	{
		prev = curr;
		curr = curr->next;
		idx--;
	}
	if (prev && new && !idx)
		prev->next = new;
	(new && !idx) ? new->next = curr : 0;
	return (!idx ? new : NULL);
}
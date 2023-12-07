#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current != NULL && count++ < index + 1)
		current = current->next;
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}

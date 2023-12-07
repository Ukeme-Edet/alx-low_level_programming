#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: nth node of list or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current != NULL && count++ < index + 1)
		current = current->next;
	if (current == NULL)
		return (NULL);
	return (current);
}

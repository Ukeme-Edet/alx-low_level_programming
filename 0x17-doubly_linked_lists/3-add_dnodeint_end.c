#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to be added to new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
		return (new_tail);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_tail;
	new_tail->prev = current;
	return (new_tail);
}

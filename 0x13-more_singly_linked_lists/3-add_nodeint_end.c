#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to a pointer that points to the head of the listint_t list
 * @n: The integer to be initialised to the new node
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	new ? new->n = n : 0;
	new ? new->next = NULL : 0;
	while (curr && curr->next)
		curr = curr->next;
	if (curr)
		curr->next = new;
	else
		*head = new;
	return (new);
}

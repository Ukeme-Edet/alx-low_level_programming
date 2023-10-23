#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer that points to the head of the listint_t list
 * @n: The integer to be initialised at the new node
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new ? new->n = n : 0;
	new ? new->next = *head : 0;
	*head = new;
	return (new);
}

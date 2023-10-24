#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer that points to a pointer to the head of the listint_t list
 * Return: A pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}

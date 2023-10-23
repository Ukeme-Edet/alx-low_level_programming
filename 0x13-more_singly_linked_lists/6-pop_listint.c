#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list and returns
 * the head node's data
 * @head: A pointer to the pointer that points to the head of the listint_t
 * list
 * Return: The data of the popped node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *curr;

	if (*head)
	{
		n = (*head)->n;
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	return (n);
}

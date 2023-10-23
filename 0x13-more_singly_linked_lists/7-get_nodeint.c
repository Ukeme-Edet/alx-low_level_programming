#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node a particular index in a listint_t list
 * @head: A pointer to the head of the listint_t linked list
 * @index: The index of the node to be returned
 * Return: The pointer to the node if found, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;

	while (curr && index--)
		curr = curr->next;
	return (curr);
}

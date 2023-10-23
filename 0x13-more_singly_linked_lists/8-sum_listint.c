#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a listint_t linked list
 * @head: A pointer to the head of the linked list
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	long int sum = 0;
	listint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

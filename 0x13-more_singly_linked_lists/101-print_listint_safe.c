#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes in the listint_t list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head, *temp2 = head;

	if (!head)
		exit(98);
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		if (temp >= temp2)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
		temp2 = temp2->next;
	}
	return (count);
}

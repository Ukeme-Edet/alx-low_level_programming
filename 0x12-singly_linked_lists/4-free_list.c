#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: The head of the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

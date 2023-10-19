#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node to the begining of a list_t list
 * @head: A pointer to a pointer that points to the head of the list_t list
 * @str: The string to be put in the new node
 * Return: The address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	new ? new->str = strdup(str) : 0;
	new ? new->len = strlen(str) : 0;
	new ? new->next = *head : 0;
	*head = new;
	return (new ? new : NULL);
}

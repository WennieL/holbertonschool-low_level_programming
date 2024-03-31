#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: pointer to the address of the head of the list
 * @str: the string add to the new node
 *
 * Return: pointer to the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *current;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}

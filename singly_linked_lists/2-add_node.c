#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to the address of the head of the list
 * @str: the string to add to the new node
 *
 * Return: pointer to the element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

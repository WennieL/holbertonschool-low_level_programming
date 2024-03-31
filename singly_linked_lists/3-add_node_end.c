#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *current;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	current = *head;
	while (current->next == NULL)
	{
		new_node->next = current->next;
                current->next = new_node;
        }

	}
	current = current->next;


	new_node->str = strdup(str);
	new_node->len = i;

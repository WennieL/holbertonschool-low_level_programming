#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer point to the head of the address of the list
 * @idx: index of the list where the new node should ne added. start from 0.
 * @n: the number is to be inserted to idx position
 *
 * Return: a new list with the inserted number
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL || h == NULL)
		return (NULL);
	
	new_node->n = n;
        new_node->prev = NULL;
        new_node->next = NULL;
	current = *h;

	if (idx == 0)
	{
		new_node->next = *h;
		if (h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	
	if (current->next == NULL && i == (idx - 1))
	{
		current->next = new_node;
		new_node->prev = curent;
		
	}


	new_node->prev = current->prev;
	new_node->next = current;
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}

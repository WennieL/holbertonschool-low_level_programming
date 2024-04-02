#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a lined list
 *
 * @head: pointer that point to the address of the head of the list
 * @index: value to return at index position
 *
 * Return: the value of the nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;

	if (current == NULL)
	{
		return (NULL);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}

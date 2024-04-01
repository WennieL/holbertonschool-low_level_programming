#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 *                of elements in a linked list
 * @h: pointer to the address of the head of the list
 *
 * Return: the element
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

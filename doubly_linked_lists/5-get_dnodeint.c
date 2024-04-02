#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "lists.h"

/**get_dnodeint_at_index - a function that returns the nth
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
	current = malloc(sizeof(dlistint_t));

	unsigned int count = 0;
	int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	current = head;

	while (current[count] != NULL)
	{
		count++;
	}

	while (i < count)
	{
		if (current-> next == NULL)
		{
			return (NULL);
		}
		
		if (current[i] == index)
		{
			return (current->n);
		}
		i++;
	}
	return (NULL);
}

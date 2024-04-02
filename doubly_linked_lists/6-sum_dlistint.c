#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 *
 * @head: pointer that point to the head of the address of the list
 *
 * Return: sum of the n in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));

	current = head;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - the function that frees a list
 * @head: pointer to the address of the head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;

	while (head != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
}

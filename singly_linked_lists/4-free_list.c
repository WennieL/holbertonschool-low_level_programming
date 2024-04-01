#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the address of the head of the list.
 *
 * Description:
 *     This function frees the memory allocated for each node in a linked list.
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}

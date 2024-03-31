#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to the head of the list
 * Return: length of the elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			len++;
		}
		h = h->next;
	}
	return (len);
}

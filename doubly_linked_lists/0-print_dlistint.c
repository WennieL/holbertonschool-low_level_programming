#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 *
 * @h: pointer to the address of the head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
			i++;
			h = h->next;
		}
	}
	return (i);
}

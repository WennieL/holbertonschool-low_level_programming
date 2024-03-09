#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the memory to print
 * @c: the char to return
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}

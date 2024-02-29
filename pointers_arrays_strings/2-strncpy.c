#include <stdio.h>
#include "main.h"

/**
 * strncpy - a function that copies a string
 * @dest: The buffer that stores the string copy
 * @src: The sourcing string
 * @n: The n bytes to copied from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}

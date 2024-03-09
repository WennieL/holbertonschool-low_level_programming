#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: Pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}

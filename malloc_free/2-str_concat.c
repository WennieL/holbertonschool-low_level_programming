#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: Pointer to a newly allocated space in memory containing
 *         the concatenated strings, or NULL on failure or if
 *         either s1 or s2 is NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int s1_len = 0;
	int s2_len = 0;
	int total_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
		s1_len++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		s2_len++;
	}

	total_len = s1_len + s2_len;
	ptr = malloc(sizeof(char) * (total_len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (i < total_len)
	{
		ptr[i] = s2[i - s1_len];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}

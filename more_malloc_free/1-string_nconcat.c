#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int i = 0, j = 0, total_len = 0;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s2_len++;
		j++;
	}
	total_len = s1_len + ((n < s2_len) ? n : s2_len);
	ptr = malloc(sizeof(char) * (total_len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}		
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

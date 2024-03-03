#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: The string to search within
 * @needle: The substring to locate
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystack_start = haystack;

		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack_start);
		}

		haystack++;
	}
	return (NULL);
}

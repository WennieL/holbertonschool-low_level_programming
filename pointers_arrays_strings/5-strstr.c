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
		char *needle_start = needle;

		while (*needle_start != '\0' && *haystack_start == *needle_start)
		{
			haystack_start++;
			needle_start++;
		}

		if (*needle_start == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}

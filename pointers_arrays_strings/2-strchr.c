#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * This function searches for the first occurrence of the character 'c'
 * in the string 's'. The search terminates when 'c' is found or when
 * the null terminator '\0' is encountered. If 'c' is found, a pointer
 * to the first occurrence of 'c' in 's' is returned. If 'c' is not
 * found, the function returns NULL.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if 'c'
 *         is not found in 's'.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s != c)
		{
			s++;
		}
		if (c == '\0')
		{
			return ('\0');
		}
	}
	return (NULL);
}

#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search within
 * @accept: The characters to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}

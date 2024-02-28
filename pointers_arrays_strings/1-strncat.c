#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: a string that concat n bytes of  @src
 * @src: a string
 * @n: only concat n byte
 *
 * Return: concatenation @dest with @n byte of @src
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int index = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (src[index] != '\0' && index < n)
	{
		*dest = src[index];
		dest++;
		index++;
	}

	*dest = '\0';

	return (dest_start);
}

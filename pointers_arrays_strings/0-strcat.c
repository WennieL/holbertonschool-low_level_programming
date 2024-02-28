#include <stdio.h>
#include "main.h"

/**
 * _strcat - concateates two strings
 * @dest: a string concatenates to form @src
 * @src: a string add after @dest string
 *
 * Return: a string @dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}

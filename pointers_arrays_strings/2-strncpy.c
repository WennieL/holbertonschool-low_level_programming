#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies a string, up to a specified number of characters.
 * @dest: The buffer where the string will be copied.
 * @src: The string to be copied.
 * @n: The maximum number of characters to be copied from src.
 *
 * Description: This function copies characters from the string src to the
 * buffer pointed to by dest. At most, n characters are copied from src,
 * and if the length of src is less than n, the remaining characters in dest
 * are filled with null terminators ('\0') to pad the buffer.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	dest[index] = '\0';

	return (dest);
}

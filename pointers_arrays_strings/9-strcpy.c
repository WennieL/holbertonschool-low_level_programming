#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminatin null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: copy the string from src
 * @src: a string
 * Return: the value pointed to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

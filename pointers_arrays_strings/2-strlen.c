#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the first character of the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

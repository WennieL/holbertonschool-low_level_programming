#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * followed by a new line
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	/* Calculate the length of the string */
	while (s[index] != '\0')
	{
		len++;
		index++;
	}

	/* Print the string in reverse */
	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}

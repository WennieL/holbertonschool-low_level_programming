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
	int i = 0, count = 0;

	/* Calculate the length of the string */
	while (s[i] != '\0')
	{
		i++;
		count++;
	}

	/* Print the string in reverse */
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

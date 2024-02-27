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
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

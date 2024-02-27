#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev(char *s) - print a string in reverse
 * followed by a new line
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n, i;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}


#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other char of a string
 * starting with the first char
 * followed by a new line
 *
 * @str: The input string
 *
 * Return: void
 *
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i++])
	{
		count++;
	}

	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - print numbers from 0 to 9
 * can only use _putchar twice in the code
 *
 * Return: void
 * Prints numbers from 0 to 9 followed by a new line
 * followed by a new line
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}

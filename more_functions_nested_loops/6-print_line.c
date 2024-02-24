#include <stdio.h>
#include "main.h"

/**
 * print_line - print _ @n times
 * print \n if n is 0 or less
 *
 * @n: print @n times
 *
 * Return void
 *
 * can only use _putchar
 * line should end with \n
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
		_putchar('\n');
}

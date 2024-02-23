#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - it prints the numbers from 0 to 9 except 2 and 4
 * can only use _putchar twice in the code
 *
 * Retuen: void
 * Prints the numbers @num from 0 to 9 except 2 and 4
 * followed by a new line
 *
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');
}

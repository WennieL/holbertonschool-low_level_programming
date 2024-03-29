#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14
 * followed by a new line
 *
 * Return: void
 * Prints @num 10 times from 0 to 14
 * can only use _putchar three times in the code
 *
 */

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
